/*
 * wpa_supplicant - Internal definitions
 * Copyright (c) 2003-2007, Jouni Malinen <j@w1.fi>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Alternatively, this software may be distributed under the terms of BSD
 * license.
 *
 * See README and COPYING for more details.
 */

#ifndef WPA_SUPPLICANT_I_H
#define WPA_SUPPLICANT_I_H

#include "supp_driver.h"

extern const char *wpa_supplicant_version;
extern const char *wpa_supplicant_license;
#ifndef CONFIG_NO_STDOUT_DEBUG
extern const char *wpa_supplicant_full_license1;
extern const char *wpa_supplicant_full_license2;
extern const char *wpa_supplicant_full_license3;
extern const char *wpa_supplicant_full_license4;
extern const char *wpa_supplicant_full_license5;
#endif /* CONFIG_NO_STDOUT_DEBUG */

extern struct wpa_driver_ops *wpa_supplicant_drivers[];


struct wpa_scan_result;
struct wpa_sm;
struct wpa_supplicant;

/*
 * Forward declarations of private structures used within the ctrl_iface
 * backends. Other parts of wpa_supplicant do not have access to data stored in
 * these structures.
 */
struct ctrl_iface_priv;
struct ctrl_iface_global_priv;
struct ctrl_iface_dbus_priv;

/**
 * struct wpa_interface - Parameters for wpa_supplicant_add_iface()
 */
struct wpa_interface {
	/**
	 * confname - Configuration name (file or profile) name
	 *
	 * This can also be %NULL when a configuration file is not used. In
	 * that case, ctrl_interface must be set to allow the interface to be
	 * configured.
	 */
	const char *confname;

	/**
	 * ctrl_interface - Control interface parameter
	 *
	 * If a configuration file is not used, this variable can be used to
	 * set the ctrl_interface parameter that would have otherwise been read
	 * from the configuration file. If both confname and ctrl_interface are
	 * set, ctrl_interface is used to override the value from configuration
	 * file.
	 */
	const char *ctrl_interface;

	/**
	 * driver - Driver interface name, or %NULL to use the default driver
	 */
	const char *driver;

	/**
	 * driver_param - Driver interface parameters
	 *
	 * If a configuration file is not used, this variable can be used to
	 * set the driver_param parameters that would have otherwise been read
	 * from the configuration file. If both confname and driver_param are
	 * set, driver_param is used to override the value from configuration
	 * file.
	 */
	const char *driver_param;

	/**
	 * ifname - Interface name
	 */
	const char *ifname;

	/**
	 * bridge_ifname - Optional bridge interface name
	 *
	 * If the driver interface (ifname) is included in a Linux bridge
	 * device, the bridge interface may need to be used for receiving EAPOL
	 * frames. This can be enabled by setting this variable to enable
	 * receiving of EAPOL frames from an additional interface.
	 */
	const char *bridge_ifname;
};

/**
 * struct wpa_params - Parameters for wpa_supplicant_init()
 */
struct wpa_params {
	/**
	 * daemonize - Run %wpa_supplicant in the background
	 */
	int daemonize;

	/**
	 * wait_for_monitor - Wait for a monitor program before starting
	 */
	int wait_for_monitor;

	/**
	 * pid_file - Path to a PID (process ID) file
	 *
	 * If this and daemonize are set, process ID of the background process
	 * will be written to the specified file.
	 */
	char *pid_file;

	/**
	 * wpa_debug_level - Debugging verbosity level (e.g., MSG_INFO)
	 */
	int wpa_debug_level;

	/**
	 * wpa_debug_show_keys - Whether keying material is included in debug
	 *
	 * This parameter can be used to allow keying material to be included
	 * in debug messages. This is a security risk and this option should
	 * not be enabled in normal configuration. If needed during
	 * development or while troubleshooting, this option can provide more
	 * details for figuring out what is happening.
	 */
	int wpa_debug_show_keys;

	/**
	 * wpa_debug_timestamp - Whether to include timestamp in debug messages
	 */
	int wpa_debug_timestamp;

	/**
	 * ctrl_interface - Global ctrl_iface path/parameter
	 */
	char *ctrl_interface;

	/**
	 * dbus_ctrl_interface - Enable the DBus control interface
	 */
	int dbus_ctrl_interface;

	/**
	 * wpa_debug_file_path - Path of debug file or %NULL to use stdout
	 */
	const char *wpa_debug_file_path;
};

/**
 * struct wpa_global - Internal, global data for all %wpa_supplicant interfaces
 *
 * This structure is initialized by calling wpa_supplicant_init() when starting
 * %wpa_supplicant.
 */
struct wpa_global {
	struct wpa_supplicant *ifaces;
	struct wpa_params params;
	struct ctrl_iface_global_priv *ctrl_iface;
	struct ctrl_iface_dbus_priv *dbus_ctrl_iface;
	void **drv_priv;
	size_t drv_count;
};


struct wpa_client_mlme {
#ifdef CONFIG_CLIENT_MLME
	enum {
		IEEE80211_DISABLED, IEEE80211_AUTHENTICATE,
		IEEE80211_ASSOCIATE, IEEE80211_ASSOCIATED,
		IEEE80211_IBSS_SEARCH, IEEE80211_IBSS_JOINED
	} state;
	u8 prev_bssid[ETH_ALEN];
	u8 ssid[32];
	size_t ssid_len;
	u16 aid;
	u16 ap_capab, capab;
	u8 *extra_ie; /* to be added to the end of AssocReq */
	size_t extra_ie_len;
	u8 *extra_probe_ie; /* to be added to the end of ProbeReq */
	size_t extra_probe_ie_len;
	wpa_key_mgmt key_mgmt;

	/* The last AssocReq/Resp IEs */
	u8 *assocreq_ies, *assocresp_ies;
	size_t assocreq_ies_len, assocresp_ies_len;

	int auth_tries, assoc_tries;

	unsigned int ssid_set:1;
	unsigned int bssid_set:1;
	unsigned int prev_bssid_set:1;
	unsigned int authenticated:1;
	unsigned int associated:1;
	unsigned int probereq_poll:1;
	unsigned int use_protection:1;
	unsigned int create_ibss:1;
	unsigned int mixed_cell:1;
	unsigned int wmm_enabled:1;

	struct os_time last_probe;

#define IEEE80211_AUTH_ALG_OPEN BIT(0)
#define IEEE80211_AUTH_ALG_SHARED_KEY BIT(1)
#define IEEE80211_AUTH_ALG_LEAP BIT(2)
	unsigned int auth_algs; /* bitfield of allowed auth algs */
	int auth_alg; /* currently used IEEE 802.11 authentication algorithm */
	int auth_transaction;

	struct os_time ibss_join_req;
	u8 *probe_resp; /* ProbeResp template for IBSS */
	size_t probe_resp_len;
	u32 supp_rates_bits;

	int wmm_last_param_set;

	int sta_scanning;
	int scan_hw_mode_idx;
	int scan_channel_idx;
	enum { SCAN_SET_CHANNEL, SCAN_SEND_PROBE } scan_state;
	struct os_time last_scan_completed;
	int scan_oper_channel;
	int scan_oper_freq;
	int scan_oper_phymode;
	u8 scan_ssid[32];
	size_t scan_ssid_len;
	int scan_skip_11b;

	struct ieee80211_sta_bss *sta_bss_list;
#define STA_HASH_SIZE 256
#define STA_HASH(sta) (sta[5])
	struct ieee80211_sta_bss *sta_bss_hash[STA_HASH_SIZE];

	int cts_protect_erp_frames;

	int phymode; /* current mode; WPA_MODE_IEEE80211A, .. */
	struct wpa_hw_modes *modes;
	size_t num_modes;
	unsigned int hw_modes; /* bitfield of allowed hardware modes;
				* (1 << MODE_*) */
	int num_curr_rates;
	struct wpa_rate_data *curr_rates;
	int freq; /* The current frequency in MHz */
	int channel; /* The current IEEE 802.11 channel number */

#ifdef CONFIG_IEEE80211R
	u8 current_md[6];
	u8 *ft_ies;
	size_t ft_ies_len;
#endif /* CONFIG_IEEE80211R */

#else /* CONFIG_CLIENT_MLME */
	int dummy; /* to keep MSVC happy */
#endif /* CONFIG_CLIENT_MLME */
};

/**
 * struct wpa_supplicant - Internal data for wpa_supplicant interface
 *
 * This structure contains the internal data for core wpa_supplicant code. This
 * should be only used directly from the core code. However, a pointer to this
 * data is used from other files as an arbitrary context pointer in calls to
 * core functions.
 */
struct wpa_supplicant {
	struct wpa_global *global;
	struct wpa_supplicant *next;
	struct l2_packet_data *l2;
	struct l2_packet_data *l2_br;
	unsigned char own_addr[ETH_ALEN];
	char ifname[100];
#ifdef CONFIG_CTRL_IFACE_DBUS
	char *dbus_path;
#endif /* CONFIG_CTRL_IFACE_DBUS */
	char bridge_ifname[16];

	//KONA:use static allocation
	//char *confname;
	char confname[32];
	struct wpa_config *conf;
	int countermeasures;
	os_time_t last_michael_mic_error;
	u8 bssid[ETH_ALEN];
	u8 pending_bssid[ETH_ALEN]; /* If wpa_state == WPA_ASSOCIATING, this
				     * field contains the targer BSSID. */
	int reassociate; /* reassociation requested */
	int disconnected; /* all connections disabled; i.e., do no reassociate
			   * before this has been cleared */
	int roaming;	/* When disconnect from Driver, we enter roaming mode */
	int roaming_occurred;
	struct wpa_ssid *current_ssid;
	int ap_ies_from_associnfo;

	/* Selected configuration (based on Beacon/ProbeResp WPA IE) */
	int pairwise_cipher;
	int group_cipher;
	int key_mgmt;
	int mgmt_group_cipher;

	void *drv_priv; /* private data used by driver_ops */
	int drv_reset;

	struct wpa_ssid *prev_scan_ssid; /* previously scanned SSID;
					  * NULL = not yet initialized (start
					  * with broadcast SSID)
					  * BROADCAST_SSID_SCAN = broadcast
					  * SSID was used in the previous scan
					  */
#define BROADCAST_SSID_SCAN ((struct wpa_ssid *) 1)

	struct wpa_scan_results *scan_res;

	struct wpa_driver_ops *driver;
	int interface_removed; /* whether the network interface has been
				* removed */
	struct wpa_sm *wpa;
	struct eapol_sm *eapol;
	struct waiakm_sm *waiakm;

	struct ctrl_iface_priv *ctrl_iface;

	wpa_states wpa_state;
	int new_connection;
	int reassociated_connection;
	int key_fail_cnt;
	int wrong_psk_ack;
	unsigned short wai_seq_num;

	int eapol_received; /* number of EAPOL packets received after the
			     * previous association event */

	struct scard_data *scard;

	unsigned char last_eapol_src[ETH_ALEN];

	int keys_cleared;

	struct wpa_blacklist *blacklist;

	int scan_req; /* manual scan request; this forces a scan even if there
		       * are no enabled networks in the configuration */
	int scan_res_tried; /* whether ap_scan=1 mode has tried to fetch scan
			     * results without a new scan request; this is used
			     * to speed up the first association if the driver
			     * has already available scan results. */
	int scan_runs; /* number of scan runs since WPS was started */

	struct wpa_client_mlme mlme;
	int use_client_mlme;
	int driver_4way_handshake;

	int pending_mic_error_report;
	int pending_mic_error_pairwise;
	int mic_errors_seen; /* Michael MIC errors with the current PTK */

	struct wps_context *wps;
	int wps_success; /* WPS success event received */
	int blacklist_cleared;
};


/* wpa_supplicant.c */
int wpa_supplicant_reload_configuration(struct wpa_supplicant *wpa_s);

const char * wpa_supplicant_state_txt(int state);
int wpa_supplicant_driver_init(struct wpa_supplicant *wpa_s);
int wpa_supplicant_set_suites(struct wpa_supplicant *wpa_s,
			      struct wpa_scan_res *bss,
			      struct wpa_ssid *ssid,
			      u8 *wpa_ie, size_t *wpa_ie_len);
void wpa_supplicant_associate(struct wpa_supplicant *wpa_s,
			      struct wpa_scan_res *bss,
			      struct wpa_ssid *ssid);
void wpa_supplicant_set_non_wpa_policy(struct wpa_supplicant *wpa_s,
				       struct wpa_ssid *ssid);
void wpa_supplicant_initiate_eapol(struct wpa_supplicant *wpa_s);
int wpa_supplicant_get_scan_results(struct wpa_supplicant *wpa_s);
void wpa_clear_keys(struct wpa_supplicant *wpa_s, const u8 *addr);
void wpa_supplicant_req_auth_timeout(struct wpa_supplicant *wpa_s,
				     int sec, int usec);
void wpa_supplicant_set_state(struct wpa_supplicant *wpa_s, wpa_states state);
struct wpa_ssid * wpa_supplicant_get_ssid(struct wpa_supplicant *wpa_s);
void wpa_supplicant_cancel_auth_timeout(struct wpa_supplicant *wpa_s);
void wpa_supplicant_deauthenticate(struct wpa_supplicant *wpa_s,
				   int reason_code);
void wpa_supplicant_disassociate(struct wpa_supplicant *wpa_s,
				 int reason_code);

void wpa_show_license(void);

struct wpa_supplicant * wpa_supplicant_add_iface(struct wpa_global *global,
						 struct wpa_interface *iface);
int wpa_supplicant_remove_iface(struct wpa_global *global,
				struct wpa_supplicant *wpa_s);
struct wpa_supplicant * wpa_supplicant_get_iface(struct wpa_global *global,
						 const char *ifname);
struct wpa_global * wpa_supplicant_init(struct wpa_params *params);
int wpa_supplicant_run(struct wpa_global *global);
void wpa_supplicant_stop(struct wpa_global *global);
void wpa_supplicant_deinit(struct wpa_global *global);

int wpa_supplicant_scard_init(struct wpa_supplicant *wpa_s,
			      struct wpa_ssid *ssid);

/* scan.c */
void wpa_supplicant_req_scan(struct wpa_supplicant *wpa_s, int sec, int usec);
void wpa_supplicant_cancel_scan(struct wpa_supplicant *wpa_s);
void wpa_supplicant_req_roaming(struct wpa_supplicant *wpa_s, int sec, int usec);
void wpa_supplicant_cancel_roaming(struct wpa_supplicant *wpa_s);
void wpa_supplicant_req_disconnect(struct wpa_supplicant *wpa_s, int sec, int usec);
void wpa_supplicant_cancel_disconnect(struct wpa_supplicant *wpa_s);

/* events.c */
void wpa_supplicant_mark_disassoc(struct wpa_supplicant *wpa_s);

/* driver_ops */
static inline void * wpa_drv_init(struct wpa_supplicant *wpa_s,
				  const char *ifname)
{
	if (wpa_s->driver->init2)
		return wpa_s->driver->init2(wpa_s, ifname, wpa_s->global);
	if (wpa_s->driver->init) {
		return wpa_s->driver->init(wpa_s, ifname);
	}
	return NULL;
}

static inline void wpa_drv_deinit(struct wpa_supplicant *wpa_s)
{
	if (wpa_s->driver->deinit)
		wpa_s->driver->deinit(wpa_s->drv_priv);
}

static inline int wpa_drv_set_param(struct wpa_supplicant *wpa_s,
				    const void *param)
{
	if (wpa_s->driver->set_param)
		return wpa_s->driver->set_param(wpa_s->drv_priv, param);
	return 0;
}

static inline int wpa_drv_set_drop_unencrypted(struct wpa_supplicant *wpa_s,
					       int enabled)
{
	if (wpa_s->driver->set_drop_unencrypted) {
		return wpa_s->driver->set_drop_unencrypted(wpa_s->drv_priv,
							   enabled);
	}
	return -1;
}

static inline int wpa_drv_set_countermeasures(struct wpa_supplicant *wpa_s,
					      int enabled)
{
	if (wpa_s->driver->set_countermeasures) {
		return wpa_s->driver->set_countermeasures(wpa_s->drv_priv,
							  enabled);
	}
	return -1;
}

static inline int wpa_drv_set_auth_alg(struct wpa_supplicant *wpa_s,
				       int auth_alg)
{
	if (wpa_s->driver->set_auth_alg) {
		return wpa_s->driver->set_auth_alg(wpa_s->drv_priv,
						   auth_alg);
	}
	return -1;
}

static inline int wpa_drv_set_wpa(struct wpa_supplicant *wpa_s, int enabled)
{
	if (wpa_s->driver->set_wpa) {
		return wpa_s->driver->set_wpa(wpa_s->drv_priv, enabled);
	}
	return 0;
}

static inline int wpa_drv_set_mode(struct wpa_supplicant *wpa_s, int mode)
{
	if (wpa_s->driver->set_mode) {
		return wpa_s->driver->set_mode(wpa_s->drv_priv, mode);
	}
	return 0;
}

static inline int wpa_drv_associate(struct wpa_supplicant *wpa_s,
				    struct wpa_driver_associate_params *params)
{
	if (wpa_s->driver->associate) {
		return wpa_s->driver->associate(wpa_s->drv_priv, params);
	}
	return -1;
}

static inline int wpa_drv_scan(struct wpa_supplicant *wpa_s, const u8 *ssid,
			       size_t ssid_len)
{
	if (wpa_s->driver->scan) {
		return wpa_s->driver->scan(wpa_s->drv_priv, ssid, ssid_len);
	}
	return -1;
}

static inline int wpa_drv_get_scan_results(struct wpa_supplicant *wpa_s,
					   struct wpa_scan_result *results,
					   size_t max_size)
{
	if (wpa_s->driver->get_scan_results) {
		return wpa_s->driver->get_scan_results(wpa_s->drv_priv,
						       results, max_size);
	}
	return -1;
}

static inline struct wpa_scan_results * wpa_drv_get_scan_results2(
	struct wpa_supplicant *wpa_s)
{
	if (wpa_s->driver->get_scan_results2)
		return wpa_s->driver->get_scan_results2(wpa_s->drv_priv);
	return NULL;
}

static inline int wpa_drv_get_bssid(struct wpa_supplicant *wpa_s, u8 *bssid)
{
	if (wpa_s->driver->get_bssid) {
		return wpa_s->driver->get_bssid(wpa_s->drv_priv, bssid);
	}
	return -1;
}

static inline int wpa_drv_get_ssid(struct wpa_supplicant *wpa_s, u8 *ssid)
{
	if (wpa_s->driver->get_ssid) {
		return wpa_s->driver->get_ssid(wpa_s->drv_priv, ssid);
	}
	return -1;
}

static inline int wpa_drv_set_key(struct wpa_supplicant *wpa_s, wpa_alg alg,
				   const u8 *addr, int key_idx, int set_tx,
				   const u8 *seq, size_t seq_len,
				   const u8 *key, size_t key_len)
{
	if (wpa_s->driver->set_key) {
		wpa_s->keys_cleared = 0;
		return wpa_s->driver->set_key(wpa_s->drv_priv, alg, addr,
					      key_idx, set_tx, seq, seq_len,
					      key, key_len);
	}
	return -1;
}

static inline int wpa_drv_deauthenticate(struct wpa_supplicant *wpa_s,
					 const u8 *addr, int reason_code)
{
	if (wpa_s->driver->deauthenticate) {
		return wpa_s->driver->deauthenticate(wpa_s->drv_priv, addr,
						     reason_code);
	}
	return -1;
}

static inline int wpa_drv_disassociate(struct wpa_supplicant *wpa_s,
				       const u8 *addr, int reason_code)
{
	if (wpa_s->driver->disassociate) {
		return wpa_s->driver->disassociate(wpa_s->drv_priv, addr,
						   reason_code);
	}
	return -1;
}

static inline int wpa_drv_add_pmkid(struct wpa_supplicant *wpa_s,
				    const u8 *bssid, const u8 *pmkid)
{
	if (wpa_s->driver->add_pmkid) {
		return wpa_s->driver->add_pmkid(wpa_s->drv_priv, bssid, pmkid);
	}
	return -1;
}

static inline int wpa_drv_remove_pmkid(struct wpa_supplicant *wpa_s,
				       const u8 *bssid, const u8 *pmkid)
{
	if (wpa_s->driver->remove_pmkid) {
		return wpa_s->driver->remove_pmkid(wpa_s->drv_priv, bssid,
						   pmkid);
	}
	return -1;
}

static inline int wpa_drv_flush_pmkid(struct wpa_supplicant *wpa_s)
{
	if (wpa_s->driver->flush_pmkid) {
		return wpa_s->driver->flush_pmkid(wpa_s->drv_priv);
	}
	return -1;
}

static inline int wpa_drv_get_capa(struct wpa_supplicant *wpa_s,
				   struct wpa_driver_capa *capa)
{
	if (wpa_s->driver->get_capa) {
		return wpa_s->driver->get_capa(wpa_s->drv_priv, capa);
	}
	return -1;
}

static inline void wpa_drv_poll(struct wpa_supplicant *wpa_s)
{
	if (wpa_s->driver->poll) {
		wpa_s->driver->poll(wpa_s->drv_priv);
	}
}

static inline const char * wpa_drv_get_ifname(struct wpa_supplicant *wpa_s)
{
	if (wpa_s->driver->get_ifname) {
		return wpa_s->driver->get_ifname(wpa_s->drv_priv);
	}
	return NULL;
}

static inline const u8 * wpa_drv_get_mac_addr(struct wpa_supplicant *wpa_s)
{
	if (wpa_s->driver->get_mac_addr) {
		return wpa_s->driver->get_mac_addr(wpa_s->drv_priv);
	}
	return NULL;
}

static inline int wpa_drv_send_eapol(struct wpa_supplicant *wpa_s,
				     const u8 *dst, u16 proto,
				     const u8 *data, size_t data_len)
{
	if (wpa_s->driver->send_eapol)
		return wpa_s->driver->send_eapol(wpa_s->drv_priv, dst, proto,
						 data, data_len);
	return -1;
}

static inline int wpa_drv_set_operstate(struct wpa_supplicant *wpa_s,
					int state)
{
	if (wpa_s->driver->set_operstate)
		return wpa_s->driver->set_operstate(wpa_s->drv_priv, state);
	return 0;
}

static inline int wpa_drv_mlme_setprotection(struct wpa_supplicant *wpa_s,
					     const u8 *addr, int protect_type,
					     int key_type)
{
	if (wpa_s->driver->mlme_setprotection)
		return wpa_s->driver->mlme_setprotection(wpa_s->drv_priv, addr,
							 protect_type,
							 key_type);
	return 0;
}

static inline struct wpa_hw_modes *
wpa_drv_get_hw_feature_data(struct wpa_supplicant *wpa_s, u16 *num_modes,
			    u16 *flags)
{
	if (wpa_s->driver->get_hw_feature_data)
		return wpa_s->driver->get_hw_feature_data(wpa_s->drv_priv,
							  num_modes, flags);
	return NULL;
}

static inline int wpa_drv_set_channel(struct wpa_supplicant *wpa_s,
				      wpa_hw_mode phymode, int chan,
				      int freq)
{
	if (wpa_s->driver->set_channel)
		return wpa_s->driver->set_channel(wpa_s->drv_priv, phymode,
						  chan, freq);
	return -1;
}

static inline int wpa_drv_set_ssid(struct wpa_supplicant *wpa_s,
				   const u8 *ssid, size_t ssid_len)
{
	if (wpa_s->driver->set_ssid) {
		return wpa_s->driver->set_ssid(wpa_s->drv_priv, ssid,
					       ssid_len);
	}
	return -1;
}

static inline int wpa_drv_set_bssid(struct wpa_supplicant *wpa_s,
				    const u8 *bssid)
{
	if (wpa_s->driver->set_bssid) {
		return wpa_s->driver->set_bssid(wpa_s->drv_priv, bssid);
	}
	return -1;
}

static inline int wpa_drv_set_country(struct wpa_supplicant *wpa_s,
				      const char *alpha2)
{
	if (wpa_s->driver->set_country)
		return wpa_s->driver->set_country(wpa_s->drv_priv, alpha2);
	return 0;
}

static inline int wpa_drv_send_mlme(struct wpa_supplicant *wpa_s,
				    const u8 *data, size_t data_len)
{
	if (wpa_s->driver->send_mlme)
		return wpa_s->driver->send_mlme(wpa_s->drv_priv,
						data, data_len);
	return -1;
}

static inline int wpa_drv_mlme_add_sta(struct wpa_supplicant *wpa_s,
				       const u8 *addr, const u8 *supp_rates,
				       size_t supp_rates_len)
{
	if (wpa_s->driver->mlme_add_sta)
		return wpa_s->driver->mlme_add_sta(wpa_s->drv_priv, addr,
						   supp_rates, supp_rates_len);
	return -1;
}

static inline int wpa_drv_mlme_remove_sta(struct wpa_supplicant *wpa_s,
					  const u8 *addr)
{
	if (wpa_s->driver->mlme_remove_sta)
		return wpa_s->driver->mlme_remove_sta(wpa_s->drv_priv, addr);
	return -1;
}

static inline int wpa_drv_update_ft_ies(struct wpa_supplicant *wpa_s,
					const u8 *md,
					const u8 *ies, size_t ies_len)
{
	if (wpa_s->driver->update_ft_ies)
		return wpa_s->driver->update_ft_ies(wpa_s->drv_priv, md,
						    ies, ies_len);
	return -1;
}

static inline int wpa_drv_send_ft_action(struct wpa_supplicant *wpa_s,
					 u8 action, const u8 *target_ap,
					 const u8 *ies, size_t ies_len)
{
	if (wpa_s->driver->send_ft_action)
		return wpa_s->driver->send_ft_action(wpa_s->drv_priv, action,
						     target_ap, ies, ies_len);
	return -1;
}

static inline int wpa_drv_set_probe_req_ie(struct wpa_supplicant *wpa_s,
					   const u8 *ies, size_t ies_len)
{
	if (wpa_s->driver->set_probe_req_ie)
		return wpa_s->driver->set_probe_req_ie(wpa_s->drv_priv, ies,
						       ies_len);
	return -1;
}
void wpa_supplicant_auth_shared_key_fail(struct wpa_supplicant *wpa_s);

#endif /* WPA_SUPPLICANT_I_H */
