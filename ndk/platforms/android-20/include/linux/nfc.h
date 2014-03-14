/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_NFC_H
#define __LINUX_NFC_H
#include <linux/types.h>
#include <linux/socket.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFC_GENL_NAME "nfc"
#define NFC_GENL_VERSION 1
#define NFC_GENL_MCAST_EVENT_NAME "events"
enum nfc_commands {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFC_CMD_UNSPEC,
 NFC_CMD_GET_DEVICE,
 NFC_CMD_DEV_UP,
 NFC_CMD_DEV_DOWN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFC_CMD_DEP_LINK_UP,
 NFC_CMD_DEP_LINK_DOWN,
 NFC_CMD_START_POLL,
 NFC_CMD_STOP_POLL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFC_CMD_GET_TARGET,
 NFC_EVENT_TARGETS_FOUND,
 NFC_EVENT_DEVICE_ADDED,
 NFC_EVENT_DEVICE_REMOVED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFC_EVENT_TARGET_LOST,
 NFC_EVENT_TM_ACTIVATED,
 NFC_EVENT_TM_DEACTIVATED,
 NFC_CMD_LLC_GET_PARAMS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFC_CMD_LLC_SET_PARAMS,
 NFC_CMD_ENABLE_SE,
 NFC_CMD_DISABLE_SE,
 NFC_CMD_LLC_SDREQ,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFC_EVENT_LLC_SDRES,
 __NFC_CMD_AFTER_LAST
};
#define NFC_CMD_MAX (__NFC_CMD_AFTER_LAST - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum nfc_attrs {
 NFC_ATTR_UNSPEC,
 NFC_ATTR_DEVICE_INDEX,
 NFC_ATTR_DEVICE_NAME,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFC_ATTR_PROTOCOLS,
 NFC_ATTR_TARGET_INDEX,
 NFC_ATTR_TARGET_SENS_RES,
 NFC_ATTR_TARGET_SEL_RES,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFC_ATTR_TARGET_NFCID1,
 NFC_ATTR_TARGET_SENSB_RES,
 NFC_ATTR_TARGET_SENSF_RES,
 NFC_ATTR_COMM_MODE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFC_ATTR_RF_MODE,
 NFC_ATTR_DEVICE_POWERED,
 NFC_ATTR_IM_PROTOCOLS,
 NFC_ATTR_TM_PROTOCOLS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFC_ATTR_LLC_PARAM_LTO,
 NFC_ATTR_LLC_PARAM_RW,
 NFC_ATTR_LLC_PARAM_MIUX,
 NFC_ATTR_SE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFC_ATTR_LLC_SDP,
 __NFC_ATTR_AFTER_LAST
};
#define NFC_ATTR_MAX (__NFC_ATTR_AFTER_LAST - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum nfc_sdp_attr {
 NFC_SDP_ATTR_UNSPEC,
 NFC_SDP_ATTR_URI,
 NFC_SDP_ATTR_SAP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __NFC_SDP_ATTR_AFTER_LAST
};
#define NFC_SDP_ATTR_MAX (__NFC_SDP_ATTR_AFTER_LAST - 1)
#define NFC_DEVICE_NAME_MAXSIZE 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFC_NFCID1_MAXSIZE 10
#define NFC_SENSB_RES_MAXSIZE 12
#define NFC_SENSF_RES_MAXSIZE 18
#define NFC_GB_MAXSIZE 48
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFC_PROTO_JEWEL 1
#define NFC_PROTO_MIFARE 2
#define NFC_PROTO_FELICA 3
#define NFC_PROTO_ISO14443 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFC_PROTO_NFC_DEP 5
#define NFC_PROTO_ISO14443_B 6
#define NFC_PROTO_MAX 7
#define NFC_COMM_ACTIVE 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFC_COMM_PASSIVE 1
#define NFC_RF_INITIATOR 0
#define NFC_RF_TARGET 1
#define NFC_RF_NONE 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFC_PROTO_JEWEL_MASK (1 << NFC_PROTO_JEWEL)
#define NFC_PROTO_MIFARE_MASK (1 << NFC_PROTO_MIFARE)
#define NFC_PROTO_FELICA_MASK (1 << NFC_PROTO_FELICA)
#define NFC_PROTO_ISO14443_MASK (1 << NFC_PROTO_ISO14443)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFC_PROTO_NFC_DEP_MASK (1 << NFC_PROTO_NFC_DEP)
#define NFC_PROTO_ISO14443_B_MASK (1 << NFC_PROTO_ISO14443_B)
#define NFC_SE_NONE 0x0
#define NFC_SE_UICC 0x1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFC_SE_EMBEDDED 0x2
struct sockaddr_nfc {
 sa_family_t sa_family;
 __u32 dev_idx;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 target_idx;
 __u32 nfc_protocol;
};
#define NFC_LLCP_MAX_SERVICE_NAME 63
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sockaddr_nfc_llcp {
 sa_family_t sa_family;
 __u32 dev_idx;
 __u32 target_idx;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 nfc_protocol;
 __u8 dsap;
 __u8 ssap;
 char service_name[NFC_LLCP_MAX_SERVICE_NAME];  ;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t service_name_len;
};
#define NFC_SOCKPROTO_RAW 0
#define NFC_SOCKPROTO_LLCP 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFC_SOCKPROTO_MAX 2
#define NFC_HEADER_SIZE 1
#define NFC_LLCP_RAW_HEADER_SIZE 2
#define NFC_LLCP_DIRECTION_RX 0x00
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFC_LLCP_DIRECTION_TX 0x01
#define NFC_LLCP_RW 0
#define NFC_LLCP_MIUX 1
#define NFC_LLCP_REMOTE_MIU 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFC_LLCP_REMOTE_LTO 3
#define NFC_LLCP_REMOTE_RW 4
#endif