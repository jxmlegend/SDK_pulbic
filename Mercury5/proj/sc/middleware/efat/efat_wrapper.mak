#-------------------------------------------------------------------------------
#   Description of some variables owned by the library
#-------------------------------------------------------------------------------
# Library module (lib) or Binary module (bin)
PROCESS = lib

PATH_C +=\
	$(PATH_efat)/src

PATH_H +=\
	$(PATH_efat)/inc\
	$(PATH_efat)/pub\
	$(PATH_storage_mdl)/pub\
	$(PATH_storage)/pub\
	$(PATH_disk)/pub
#-------------------------------------------------------------------------------
#	Extra compiler option for CC
#-------------------------------------------------------------------------------
PP_OPT_COMMON -= O3               
PP_OPT_COMMON += O2  
  
#-------------------------------------------------------------------------------
#   List of source files of the library or executable to generate
#-------------------------------------------------------------------------------
SRC_C_LIST =\
    fatfs_wrapper.c\
    fatfs_utility.c

#-------------------------------------------------------------------------------
#   List of source files of verification to generate
#-------------------------------------------------------------------------------
ifeq ($(call FIND_COMPILER_OPTION, __I_SW__), TRUE)
SRC_C_LIST += isw_efatfs.c
endif

