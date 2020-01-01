/*
 * Copyright 2002-2003 Aplix Corporation. All rights reserved.
 */

#ifndef KJAVA_SYS_DATA_HEADER
#define KJAVA_SYS_DATA_HEADER

/**
 * @file kjava_sys_data.h
 *
 */

/* Mstar header - begin */
#include "jap_head.h"
/* Mstar header - end */

#ifdef __cplusplus
extern "C"{
#endif

/** @addtogroup core_system_service_ksi
 *  @{
 */
/**
 * @addtogroup ROMized_Data_Access_KSI ROMized Data Access KSI
 * An interface for accessing the data ROMized by PIK.
 * The implementation of this interface is auto-generated by @ref page_pik.
 *
 * @par Include file 
 * \#include kjava_sys_data.h
 * @{
 */

/*-----------------------------------------------------------------------------
 * Marcos, Constants, Types, and Structures
 *----------------------------------------------------------------------------*/
/** 
 * The structure type for representing a file/directory slot in the ROMized file system.
 * Note that this structure type is handled by an implementation generated by Preinstall Toolkit.
 * That is, the native system need not care this structure type directly.
 * See @ref page_pik for details.
 */
typedef struct _KJavaROMDataTag
{
    /** 
     * The name.
     */
    const char*             name;
    /** 
     * The data content.
     */
    const char*             data;
    /** 
     * The length of the data indicated by <i>data</i>.
     */
    int                     dataLength;
    /** 
     * The parent directory.
     */
    int                     parent;
    /** 
     * The child directory.
     */
    int                     child;
    /** 
     * The sibling.
     */
    int                     sibling;
    /** 
     * A flag indicating whether this is a directory.
     */
    int                     directory;

} KJavaROMData;

/*-----------------------------------------------------------------------------
 * Global Function(s) Prototype
 *----------------------------------------------------------------------------*/
/**
 * Gets a pointer to the ROMized data.
 *
 * <b>DO NOT</b> implement this KSI function directly. 
 * This KSI function is implemented by Preinstall Toolkit. 
 * See @ref page_pik for details.
 */
void* kjava_core_getROMInfo(void);

/** @} */
/** @} */

#ifdef __cplusplus
}
#endif

#endif /* KJAVA_SYS_DATA_HEADER */
