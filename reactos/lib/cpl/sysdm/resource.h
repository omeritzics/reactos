#ifndef __CPL_RESOURCE_H
#define __CPL_RESOURCE_H

/* metrics */
#define PROPSHEETWIDTH  246
#define PROPSHEETHEIGHT 228
#define PROPSHEETPADDING        6
#define SYSTEM_COLUMN   (18 * PROPSHEETPADDING)
#define LABELLINE(x)    (((PROPSHEETPADDING + 2) * x) + (x + 2))
#define ICONSIZE        16

/* ids */
#define RC_LICENSE      101
#define RTDATA  300

#define IDI_CPLSYSTEM	100
#define IDI_DEVMGR      101

#define IDD_PROPPAGEGENERAL	100
#define IDD_PROPPAGECOMPUTER	101
#define IDD_PROPPAGEHARDWARE	102
#define IDD_PROPPAGEUSERPROFILE	103
#define IDD_PROPPAGEADVANCED	104

#define IDS_CPLSYSTEMNAME	1001
#define IDS_CPLSYSTEMDESCRIPTION	2001

/* controls */
#define IDC_LICENSEMEMO 101
#define IDC_PROCESSORMANUFACTURER       102
#define IDC_PROCESSOR   103
#define IDC_PROCESSORSPEED      104
#define IDC_SYSTEMMEMORY        105
#define IDC_DEVMGR      106
#define IDC_ENVVAR	107
#define IDC_STAREC	108
#define IDC_ICON1       201

#define IDC_COMPUTERNAME	202
#define IDC_WORKGROUPDOMAIN_NAME	203
#define IDC_WORKGROUPDOMAIN	204
#define IDC_NETWORK_ID	205
#define IDC_NETWORK_PROPERTY	206
#define IDC_HARDWARE_WIZARD	207
#define IDC_HARDWARE_PROFILE	210
#define IDC_HARDWARE_DRIVER_SIGN	211
#define IDC_HARDWARE_DEVICE_MANAGER	212
#define IDC_USERPROFILE_DELETE	213
#define IDC_USERPROFILE_CHANGE	214
#define IDC_USERPROFILE_COPY		215

#endif /* __CPL_RESOURCE_H */

/* EOF */
