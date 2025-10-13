﻿// Copyright © Eaton Works 2025. All rights reserved.
// License: https://github.com/EatonZ/BadStorage/blob/main/LICENSE

#pragma once

#pragma region

#ifdef _XDK
#define SetMemory(Dest, Source, Size)         DmSetMemory(Dest, Size, Source, NULL);
#define SataDiskUserAddressableSectors_Offset 0x8020A56C
#define XContentDeviceProcessAddRemove_Offset 0x817316A8
#define BroadcastStorageDevicesChanged_Offset 0x817AEAB0
#else
#define SetMemory(Dest, Source, Size)         memcpy(Dest, Source, Size);
#define SataDiskUserAddressableSectors_Offset 0x801A61EC
#define XContentDeviceProcessAddRemove_Offset 0x8167E918
#define BroadcastStorageDevicesChanged_Offset 0x816E2DF8
#endif

#define XNOTIFYUI_TYPE_FRIENDONLINE                 0
#define XNOTIFYUI_TYPE_GAMEINVITE                   1
#define XNOTIFYUI_TYPE_FRIENDREQUEST                2
#define XNOTIFYUI_TYPE_GENERIC                      3
#define XNOTIFYUI_TYPE_MULTIPENDING                 4
#define XNOTIFYUI_TYPE_PERSONALMESSAGE              5
#define XNOTIFYUI_TYPE_SIGNEDOUT                    6
#define XNOTIFYUI_TYPE_SIGNEDIN                     7
#define XNOTIFYUI_TYPE_SIGNEDINLIVE                 8
#define XNOTIFYUI_TYPE_SIGNEDINNEEDPASS             9
#define XNOTIFYUI_TYPE_CHATREQUEST                  10
#define XNOTIFYUI_TYPE_CONNECTIONLOST               11
#define XNOTIFYUI_TYPE_DOWNLOADCOMPLETE             12
#define XNOTIFYUI_TYPE_SONGPLAYING                  13
#define XNOTIFYUI_TYPE_PREFERRED_REVIEW             14
#define XNOTIFYUI_TYPE_AVOID_REVIEW                 15
#define XNOTIFYUI_TYPE_COMPLAINT                    16
#define XNOTIFYUI_TYPE_CHATCALLBACK                 17
#define XNOTIFYUI_TYPE_REMOVEDMU                    18
#define XNOTIFYUI_TYPE_REMOVEDGAMEPAD               19
#define XNOTIFYUI_TYPE_CHATJOIN                     20
#define XNOTIFYUI_TYPE_CHATLEAVE                    21
#define XNOTIFYUI_TYPE_GAMEINVITESENT               22
#define XNOTIFYUI_TYPE_CANCELPERSISTENT             23
#define XNOTIFYUI_TYPE_CHATCALLBACKSENT             24
#define XNOTIFYUI_TYPE_MULTIFRIENDONLINE            25
#define XNOTIFYUI_TYPE_ONEFRIENDONLINE              26
#define XNOTIFYUI_TYPE_ACHIEVEMENT                  27
#define XNOTIFYUI_TYPE_HYBRIDDISC                   28
#define XNOTIFYUI_TYPE_MAILBOX                      29
#define XNOTIFYUI_TYPE_VIDEOCHATINVITE              30
#define XNOTIFYUI_TYPE_DOWNLOADCOMPLETEDREADYTOPLAY 31
#define XNOTIFYUI_TYPE_CANNOTDOWNLOAD               32
#define XNOTIFYUI_TYPE_DOWNLOADSTOPPED              33
#define XNOTIFYUI_TYPE_CONSOLEMESSAGE               34
#define XNOTIFYUI_TYPE_GAMEMESSAGE                  35
#define XNOTIFYUI_TYPE_DEVICEFULL                   36
#define XNOTIFYUI_TYPE_CHATMESSAGE                  38
#define XNOTIFYUI_TYPE_MULTIACHIEVEMENTS            39
#define XNOTIFYUI_TYPE_NUDGE                        40
#define XNOTIFYUI_TYPE_MESSENGERCONNECTIONLOST      41
#define XNOTIFYUI_TYPE_MESSENGERSIGNINFAILED        43
#define XNOTIFYUI_TYPE_MESSENGERCONVERSATIONMISSED  44
#define XNOTIFYUI_TYPE_FAMILYTIMERREMAINING         45
#define XNOTIFYUI_TYPE_CONNECTIONLOSTRECONNECT      46
#define XNOTIFYUI_TYPE_EXCESSIVEPLAYTIME            47
#define XNOTIFYUI_TYPE_PARTYJOINREQUEST             49
#define XNOTIFYUI_TYPE_PARTYINVITESENT              50
#define XNOTIFYUI_TYPE_PARTYGAMEINVITESENT          51
#define XNOTIFYUI_TYPE_PARTYKICKED                  52
#define XNOTIFYUI_TYPE_PARTYDISCONNECTED            53
#define XNOTIFYUI_TYPE_PARTYCANNOTCONNECT           56
#define XNOTIFYUI_TYPE_PARTYSOMEONEJOINED           57
#define XNOTIFYUI_TYPE_PARTYSOMEONELEFT             58
#define XNOTIFYUI_TYPE_GAMERPICTUREUNLOCKED         59
#define XNOTIFYUI_TYPE_AVATARAWARDUNLOCKED          60
#define XNOTIFYUI_TYPE_PARTYJOINED                  61
#define XNOTIFYUI_TYPE_REMOVEDUSB                   62
#define XNOTIFYUI_TYPE_PLAYERMUTED                  63
#define XNOTIFYUI_TYPE_PLAYERUNMUTED                64
#define XNOTIFYUI_TYPE_CHATMESSAGE2                 65
#define XNOTIFYUI_TYPE_KINECTCONNECTED              66
#define XNOTIFYUI_TYPE_KINECTBREAK                  67
#define XNOTIFYUI_TYPE_ETHERNET                     68
#define XNOTIFYUI_TYPE_KINECTPLAYERRECOGNIZED       69
#define XNOTIFYUI_TYPE_CONSOLESHUTTINGDOWNSOONALERT 70
#define XNOTIFYUI_TYPE_PROFILESIGNEDINELSEWHERE     71
#define XNOTIFYUI_TYPE_LASTSIGNINELSEWHERE          73
#define XNOTIFYUI_TYPE_KINECTDEVICEUNSUPPORTED      74
#define XNOTIFYUI_TYPE_WIRELESSDEVICETURNOFF        75
#define XNOTIFYUI_TYPE_UPDATING                     76
#define XNOTIFYUI_TYPE_SMARTGLASSAVAILABLE          77

#define XNOTIFYUI_PRIORITY_LOW        0
#define XNOTIFYUI_PRIORITY_DEFAULT    1
#define XNOTIFYUI_PRIORITY_HIGH       2
#define XNOTIFYUI_PRIORITY_PERSISTENT 3

#define NTKERNELAPI

typedef LONG NTSTATUS;
#define NT_SUCCESS(Status) ((NTSTATUS)(Status) >= 0)
#define STATUS_UNRECOGNIZED_VOLUME   (0xC000014F)
#define STATUS_OBJECT_PATH_NOT_FOUND (0xC000003A)
#define STATUS_VOLUME_DISMOUNTED     (0xC000026E)

#define OBJ_CASE_INSENSITIVE 0x40
#define FILE_SYNCHRONOUS_IO_NONALERT 0x20
#define InitializeObjectAttributes( p, n, a, r, s ) { (p)->RootDirectory = (r); (p)->Attributes = (a); (p)->ObjectName = (PANSI_STRING)(n); }

#define IOCTL_IDE_PASS_THROUGH 0x4D028

#define IDE_COMMAND_IDENTIFY_DEVICE ((UCHAR)0xEC)

#define XBOX_HW_FLAG_HDD 0x20

#define FAT_VOLUME_SIGNATURE 'XTAF'

#pragma endregion Defs

#pragma region

typedef enum _DEVICESTATE {
    DEVICESTATE_NONE = 0,
    DEVICESTATE_ADD = 1,
    DEVICESTATE_REMOVE = 2,
    DEVICESTATE_IDLE = 3,
    DEVICESTATE_UNFORMATTED = 4,
    DEVICESTATE_IGNORE = 5,
	DEVICESTATE_UNKNOWN = 6, //?
	DEVICESTATE_USB_WRITABLE = 7,
    DEVICESTATE_FORCE_DWORD = 0xFFFFFFFF
} DEVICESTATE, *PDEVICESTATE;

#pragma endregion Enums

#pragma region

typedef struct _XBOX_KRNL_VERSION {
    USHORT Major;
    USHORT Minor;
    USHORT Build;
    USHORT Qfe;
} XBOX_KRNL_VERSION, *PXBOX_KRNL_VERSION;

typedef struct _XBOX_HARDWARE_INFO {
    ULONG Flags;
    UCHAR NumberOfProcessors;
    UCHAR PCIBridgeRevisionID;
    UCHAR Reserved[6];
    USHORT BldrMagic;
    USHORT BldrFlags;
} XBOX_HARDWARE_INFO, *PXBOX_HARDWARE_INFO;

typedef struct _STRING {
    USHORT Length;
    USHORT MaximumLength;
    PCHAR Buffer;
} STRING, *PSTRING, ANSI_STRING, *PANSI_STRING, OBJECT_STRING, *POBJECT_STRING;

typedef struct _OBJECT_ATTRIBUTES {
	HANDLE RootDirectory;
	PANSI_STRING ObjectName;
	ULONG Attributes;
} OBJECT_ATTRIBUTES, *POBJECT_ATTRIBUTES;

typedef struct _IO_STATUS_BLOCK {
	union {
		NTSTATUS Status;
		PVOID Pointer;
	};
	ULONG_PTR Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK;

typedef VOID (NTAPI *PIO_APC_ROUTINE)(
    IN PVOID ApcContext,
    IN PIO_STATUS_BLOCK IoStatusBlock,
    IN ULONG Reserved
);

//Xbox 360 uses a simplified structure compared to OG Xbox and Windows.
typedef struct _PARTITION_INFORMATION {
    LARGE_INTEGER StartingOffset;
    LARGE_INTEGER PartitionLength;
} PARTITION_INFORMATION, *PPARTITION_INFORMATION;

typedef struct _DISPATCHER_HEADER {
    UCHAR Type;
    UCHAR Absolute;
    UCHAR Size;
    UCHAR Inserted;
    LONG SignalState;
    LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER;

typedef struct _KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT, *RESTRICTED_POINTER PRKEVENT;

typedef struct _KDEVICE_QUEUE {
    SHORT Type;
    UCHAR Padding;
    BOOLEAN Busy;
	ULONG Lock;
    LIST_ENTRY DeviceListHead;
} KDEVICE_QUEUE, *PKDEVICE_QUEUE, *RESTRICTED_POINTER PRKDEVICE_QUEUE;

typedef struct _DEVICE_OBJECT {
    SHORT Type;
    USHORT Size;
    LONG ReferenceCount;
    PVOID DriverObject;
    _DEVICE_OBJECT* MountedOrSelfDevice;
    PVOID CurrentIrp;
    ULONG Flags;
    PVOID DeviceExtension;
    UCHAR DeviceType;
    UCHAR StartIoFlags;
    CCHAR StackSize;
    BOOLEAN DeletePending;
    ULONG SectorSize;
    ULONG AlignmentRequirement;
    KDEVICE_QUEUE DeviceQueue;
    KEVENT DeviceLock;
	ULONG StartIoCount;
    ULONG StartIoKey;
} DEVICE_OBJECT, *PDEVICE_OBJECT;

typedef struct _SATA_DISK_EXTENSION {
    PARTITION_INFORMATION PartitionInformation;
} SATA_DISK_EXTENSION, *PSATA_DISK_EXTENSION;

typedef struct _IDEREGS {
	UCHAR bFeaturesReg;
	UCHAR bSectorCountReg;
	UCHAR bSectorNumberReg;
	UCHAR bCylLowReg;
	UCHAR bCylHighReg;
	UCHAR bDriveHeadReg;
	UCHAR bCommandReg;
	UCHAR bHostSendsData; //Different than on Windows, which is named bReserved. On Xbox, set to TRUE for a data out command, and FALSE for data in. Not actually sent to the disk.
} IDEREGS, *PIDEREGS;

//C:\Program Files (x86)\Windows Kits\10\Include\10.0.26100.0\km\ata.h
#pragma bitfield_order(push, lsb_to_msb) //Required on Xbox 360 to ensure correct ordering.
#pragma pack(push, 1)
typedef struct _IDENTIFY_DEVICE_DATA {

    struct {
        USHORT Reserved1 : 1;
        USHORT Retired3 : 1;
        USHORT ResponseIncomplete : 1;
        USHORT Retired2 : 3;
        USHORT FixedDevice : 1;                 // obsolete
        USHORT RemovableMedia : 1;              // obsolete
        USHORT Retired1 : 7;
        USHORT DeviceType : 1;
    } GeneralConfiguration;                     // word 0

    USHORT NumCylinders;                        // word 1, obsolete
    USHORT SpecificConfiguration;               // word 2
    USHORT NumHeads;                            // word 3, obsolete
    USHORT Retired1[2];
    USHORT NumSectorsPerTrack;                  // word 6, obsolete
    USHORT VendorUnique1[3];
    UCHAR  SerialNumber[20];                    // word 10-19
    USHORT Retired2[2];
    USHORT Obsolete1;
    UCHAR  FirmwareRevision[8];                 // word 23-26
    UCHAR  ModelNumber[40];                     // word 27-46
    UCHAR  MaximumBlockTransfer;                // word 47. 01h-10h = Maximum number of sectors that shall be transferred per interrupt on READ/WRITE MULTIPLE commands
    UCHAR  VendorUnique2;

    struct {
        USHORT FeatureSupported : 1;
        USHORT Reserved : 15;
    }TrustedComputing;                          // word 48

    struct {
        UCHAR CurrentLongPhysicalSectorAlignment : 2;
        UCHAR ReservedByte49 : 6;

        UCHAR DmaSupported : 1;
        UCHAR LbaSupported : 1;                 // Shall be set to one to indicate that LBA is supported.
        UCHAR IordyDisable : 1;
        UCHAR IordySupported : 1;
        UCHAR Reserved1 : 1;                    // Reserved for the IDENTIFY PACKET DEVICE command
        UCHAR StandybyTimerSupport : 1;
        UCHAR Reserved2 : 2;                    // Reserved for the IDENTIFY PACKET DEVICE command

        USHORT ReservedWord50;
    }Capabilities;                              // word 49-50

    USHORT ObsoleteWords51[2];

    USHORT TranslationFieldsValid : 3;            // word 53, bit 0 - Obsolete; bit 1 - words 70:64 valid; bit 2; word 88 valid
    USHORT Reserved3 : 5;
    USHORT FreeFallControlSensitivity : 8;

    USHORT NumberOfCurrentCylinders;            // word 54, obsolete
    USHORT NumberOfCurrentHeads;                // word 55, obsolete
    USHORT CurrentSectorsPerTrack;              // word 56, obsolete
    ULONG  CurrentSectorCapacity;               // word 57, word 58, obsolete

    UCHAR  CurrentMultiSectorSetting;           // word 59
    UCHAR  MultiSectorSettingValid : 1;
    UCHAR  ReservedByte59 : 3;
    UCHAR  SanitizeFeatureSupported : 1;
    UCHAR  CryptoScrambleExtCommandSupported : 1;
    UCHAR  OverwriteExtCommandSupported : 1;
    UCHAR  BlockEraseExtCommandSupported : 1;

    ULONG  UserAddressableSectors;              // word 60-61, for 28-bit commands

    USHORT ObsoleteWord62;

    USHORT MultiWordDMASupport : 8;             // word 63
    USHORT MultiWordDMAActive : 8;

    USHORT AdvancedPIOModes : 8;                // word 64. bit 0:1 - PIO mode supported
    USHORT ReservedByte64 : 8;

    USHORT MinimumMWXferCycleTime;              // word 65
    USHORT RecommendedMWXferCycleTime;          // word 66
    USHORT MinimumPIOCycleTime;                 // word 67
    USHORT MinimumPIOCycleTimeIORDY;            // word 68

    struct {
        USHORT ZonedCapabilities : 2;
        USHORT NonVolatileWriteCache : 1;                   // All write cache is non-volatile
        USHORT ExtendedUserAddressableSectorsSupported : 1;
        USHORT DeviceEncryptsAllUserData : 1;
        USHORT ReadZeroAfterTrimSupported : 1;
        USHORT Optional28BitCommandsSupported : 1;
        USHORT IEEE1667 : 1;            // Reserved for IEEE 1667
        USHORT DownloadMicrocodeDmaSupported : 1;
        USHORT SetMaxSetPasswordUnlockDmaSupported : 1;
        USHORT WriteBufferDmaSupported : 1;
        USHORT ReadBufferDmaSupported : 1;
        USHORT DeviceConfigIdentifySetDmaSupported : 1;     // obsolete
        USHORT LPSAERCSupported : 1;                        // Long Physical Sector Alignment Error Reporting Control is supported.
        USHORT DeterministicReadAfterTrimSupported : 1;
        USHORT CFastSpecSupported : 1;
    }AdditionalSupported;                       // word 69

    USHORT ReservedWords70[5];                  // word 70 - reserved
                                                // word 71:74 - Reserved for the IDENTIFY PACKET DEVICE command

    //Word 75
    USHORT QueueDepth : 5;          //  Maximum queue depth - 1
    USHORT ReservedWord75 : 11;

    struct {
    // Word 76
        USHORT Reserved0    : 1;    // shall be set to 0
        USHORT SataGen1     : 1;    // Supports SATA Gen1 Signaling Speed (1.5Gb/s)
        USHORT SataGen2     : 1;    // Supports SATA Gen2 Signaling Speed (3.0Gb/s)
        USHORT SataGen3     : 1;    // Supports SATA Gen3 Signaling Speed (6.0Gb/s)

        USHORT Reserved1    : 4;

        USHORT NCQ          : 1;    // Supports the NCQ feature set
        USHORT HIPM         : 1;    // Supports HIPM
        USHORT PhyEvents    : 1;    // Supports the SATA Phy Event Counters log
        USHORT NcqUnload    : 1;    // Supports Unload while NCQ commands are outstanding

        USHORT NcqPriority  : 1;    // Supports NCQ priority information
        USHORT HostAutoPS   : 1;    // Supports Host Automatic Partial to Slumber transitions
        USHORT DeviceAutoPS : 1;    // Supports Device Automatic Partial to Slumber transitions
        USHORT ReadLogDMA   : 1;    // Supports READ LOG DMA EXT as equivalent to READ LOG EXT

    // Word 77
        USHORT Reserved2    : 1;                // shall be set to 0
        USHORT CurrentSpeed : 3;                // Coded value indicating current negotiated Serial ATA signal speed

        USHORT NcqStreaming : 1;                // Supports NCQ Streaming
        USHORT NcqQueueMgmt : 1;                // Supports NCQ Queue Management Command
        USHORT NcqReceiveSend : 1;              // Supports RECEIVE FPDMA QUEUED and SEND FPDMA QUEUED commands
        USHORT DEVSLPtoReducedPwrState : 1;

        USHORT Reserved3    : 8;
    }SerialAtaCapabilities;

    // Word 78
    struct {
        USHORT Reserved0    : 1;                //shall be set to 0
        USHORT NonZeroOffsets:1;                // Device supports non-zero buffer offsets in DMA Setup FIS
        USHORT DmaSetupAutoActivate:1;          // Device supports DMA Setup auto-activation
        USHORT DIPM         : 1;                // Device supports DIPM

        USHORT InOrderData  : 1;                // Device supports in-order data delivery
        USHORT HardwareFeatureControl:1;        // Hardware Feature Control is supported
        USHORT SoftwareSettingsPreservation:1;  // Device supports Software Settings Preservation
        USHORT NCQAutosense:1;                  // Supports NCQ Autosense

        USHORT DEVSLP               :1;         // Device supports link power state - device sleep
        USHORT HybridInformation    :1;         // Device supports Hybrid Information Feature (If the device does not support NCQ (word 76 bit 8 is 0), then this bit shall be cleared to 0.)

        USHORT Reserved1    : 6;
    }SerialAtaFeaturesSupported;

    // Word 79
    struct {
        USHORT Reserved0    : 1;                // shall be set to 0
        USHORT NonZeroOffsets:1;                // Non-zero buffer offsets in DMA Setup FIS enabled
        USHORT DmaSetupAutoActivate:1;          // DMA Setup auto-activation optimization enabled
        USHORT DIPM         : 1;                // DIPM enabled

        USHORT InOrderData  : 1;                // In-order data delivery enabled
        USHORT HardwareFeatureControl:1;        // Hardware Feature Control is enabled
        USHORT SoftwareSettingsPreservation:1;  // Software Settings Preservation enabled
        USHORT DeviceAutoPS : 1;                // Device Automatic Partial to Slumber transitions enabled

        USHORT DEVSLP               :1;         // link power state - device sleep is enabled
        USHORT HybridInformation    :1;         // Hybrid Information Feature is enabled

        USHORT Reserved1    : 6;
    }SerialAtaFeaturesEnabled;

    USHORT MajorRevision;                       // word 80. bit 5 - supports ATA5; bit 6 - supports ATA6; bit 7 - supports ATA7; bit 8 - supports ATA8-ACS; bit 9 - supports ACS-2;
    USHORT MinorRevision;                       // word 81. T13 minior version number

    struct {

        //
        // Word 82
        //
        USHORT SmartCommands : 1;           // The SMART feature set is supported
        USHORT SecurityMode : 1;            // The Security feature set is supported
        USHORT RemovableMediaFeature : 1;   // obsolete
        USHORT PowerManagement : 1;         // shall be set to 1
        USHORT Reserved1 : 1;               // PACKET feature set, set to 0 indicates not supported for ATA devices (only support for ATAPI devices)
        USHORT WriteCache : 1;              // The volatile write cache is supported
        USHORT LookAhead : 1;               // Read look-ahead is supported
        USHORT ReleaseInterrupt : 1;        // obsolete
        USHORT ServiceInterrupt : 1;        // obsolete
        USHORT DeviceReset : 1;             // Shall be cleared to zero to indicate that the DEVICE RESET command is not supported
        USHORT HostProtectedArea : 1;       // obsolete
        USHORT Obsolete1 : 1;
        USHORT WriteBuffer : 1;             // The WRITE BUFFER command is supported
        USHORT ReadBuffer : 1;              // The READ BUFFER command is supported
        USHORT Nop : 1;                     // The NOP command is supported
        USHORT Obsolete2 : 1;

        //
        // Word 83
        //
        USHORT DownloadMicrocode : 1;       // The DOWNLOAD MICROCODE command is supported
        USHORT DmaQueued : 1;               // obsolete
        USHORT Cfa : 1;                     // The CFA feature set is supported
        USHORT AdvancedPm : 1;              // The APM feature set is supported
        USHORT Msn : 1;                     // obsolete
        USHORT PowerUpInStandby : 1;        // The PUIS feature set is supported
        USHORT ManualPowerUp : 1;           // SET FEATURES subcommand is required to spin-up after power-up
        USHORT Reserved2 : 1;
        USHORT SetMax : 1;                  // obsolete
        USHORT Acoustics : 1;               // obsolete
        USHORT BigLba : 1;                  // The 48-bit Address feature set is supported
        USHORT DeviceConfigOverlay : 1;     // obsolete
        USHORT FlushCache : 1;              // Shall be set to one to indicate that the mandatory FLUSH CACHE command is supported
        USHORT FlushCacheExt : 1;           // The FLUSH CACHE EXT command is supported
        USHORT WordValid83 : 2;             // shall be 01b


        //
        // Word 84
        //
        USHORT SmartErrorLog : 1;           // SMART error logging is supported
        USHORT SmartSelfTest : 1;           // The SMART self-test is supported
        USHORT MediaSerialNumber : 1;       // Media serial number is supported
        USHORT MediaCardPassThrough : 1;    // obsolete
        USHORT StreamingFeature : 1;        // The Streaming feature set is supported
        USHORT GpLogging : 1;               // The GPL feature set is supported
        USHORT WriteFua : 1;                // The WRITE DMA FUA EXT and WRITE MULTIPLE FUA EXT commands are supported
        USHORT WriteQueuedFua : 1;          // obsolete
        USHORT WWN64Bit : 1;                // The 64-bit World wide name is supported
        USHORT URGReadStream : 1;           // obsolete
        USHORT URGWriteStream : 1;          // obsolete
        USHORT ReservedForTechReport : 2;
        USHORT IdleWithUnloadFeature : 1;   // The IDLE IMMEDIATE command with UNLOAD feature is supported
        USHORT WordValid : 2;               // shall be 01b

    }CommandSetSupport;

    struct {

        //
        // Word 85
        //
        USHORT SmartCommands : 1;           // The SMART feature set is enabled
        USHORT SecurityMode : 1;            // The Security feature set is enabled
        USHORT RemovableMediaFeature : 1;   // obsolete
        USHORT PowerManagement : 1;         // Shall be set to one to indicate that the mandatory Power Management feature set is supported
        USHORT Reserved1 : 1;               // Shall be cleared to zero to indicate that the PACKET feature set is not supported
        USHORT WriteCache : 1;              // The volatile write cache is enabled
        USHORT LookAhead : 1;               // Read look-ahead is enabled
        USHORT ReleaseInterrupt : 1;        // The release interrupt is enabled
        USHORT ServiceInterrupt : 1;        // The SERVICE interrupt is enabled
        USHORT DeviceReset : 1;             // Shall be cleared to zero to indicate that the DEVICE RESET command is not supported
        USHORT HostProtectedArea : 1;       // obsolete
        USHORT Obsolete1 : 1;
        USHORT WriteBuffer : 1;             // The WRITE BUFFER command is supported
        USHORT ReadBuffer : 1;              // The READ BUFFER command is supported
        USHORT Nop : 1;                     // The NOP command is supported
        USHORT Obsolete2 : 1;

        //
        // Word 86
        //
        USHORT DownloadMicrocode : 1;       // The DOWNLOAD MICROCODE command is supported
        USHORT DmaQueued : 1;               // obsolete
        USHORT Cfa : 1;                     // The CFA feature set is supported
        USHORT AdvancedPm : 1;              // The APM feature set is enabled
        USHORT Msn : 1;                     // obsolete
        USHORT PowerUpInStandby : 1;        // The PUIS feature set is enabled
        USHORT ManualPowerUp : 1;           // SET FEATURES subcommand is required to spin-up after power-up
        USHORT Reserved2 : 1;
        USHORT SetMax : 1;                  // obsolete
        USHORT Acoustics : 1;               // obsolete
        USHORT BigLba : 1;                  // The 48-bit Address features set is supported
        USHORT DeviceConfigOverlay : 1;     // obsolete
        USHORT FlushCache : 1;              // FLUSH CACHE command supported
        USHORT FlushCacheExt : 1;           // FLUSH CACHE EXT command supported
        USHORT Resrved3 : 1;
        USHORT Words119_120Valid : 1;       // Words 119..120 are valid

        //
        // Word 87
        //
        USHORT SmartErrorLog : 1;           // SMART error logging is supported
        USHORT SmartSelfTest : 1;           // SMART self-test supported
        USHORT MediaSerialNumber : 1;       // Media serial number is valid
        USHORT MediaCardPassThrough : 1;    // obsolete
        USHORT StreamingFeature : 1;        // obsolete
        USHORT GpLogging : 1;               // The GPL feature set is supported
        USHORT WriteFua : 1;                // The WRITE DMA FUA EXT and WRITE MULTIPLE FUA EXT commands are supported
        USHORT WriteQueuedFua : 1;          // obsolete
        USHORT WWN64Bit : 1;                // The 64-bit World wide name is supported
        USHORT URGReadStream : 1;           // obsolete
        USHORT URGWriteStream : 1;          // obsolete
        USHORT ReservedForTechReport : 2;
        USHORT IdleWithUnloadFeature : 1;   // The IDLE IMMEDIATE command with UNLOAD FEATURE is supported
        USHORT Reserved4 : 2;               // bit 14 shall be set to 1; bit 15 shall be cleared to 0

    }CommandSetActive;

    USHORT UltraDMASupport : 8;                 // word 88. bit 0 - UDMA mode 0 is supported ... bit 6 - UDMA mode 6 and below are supported
    USHORT UltraDMAActive  : 8;                 // word 88. bit 8 - UDMA mode 0 is selected ... bit 14 - UDMA mode 6 is selected

    struct {                                    // word 89
        USHORT TimeRequired : 15;
        USHORT ExtendedTimeReported : 1;
    } NormalSecurityEraseUnit;

    struct {                                    // word 90
        USHORT TimeRequired : 15;
        USHORT ExtendedTimeReported : 1;
    } EnhancedSecurityEraseUnit;

    USHORT CurrentAPMLevel : 8;                 // word 91
    USHORT ReservedWord91 : 8;

    USHORT MasterPasswordID;                    // word 92. Master Password Identifier

    USHORT HardwareResetResult;                 // word 93

    USHORT CurrentAcousticValue : 8;            // word 94. obsolete
    USHORT RecommendedAcousticValue : 8;

    USHORT StreamMinRequestSize;                // word 95
    USHORT StreamingTransferTimeDMA;            // word 96
    USHORT StreamingAccessLatencyDMAPIO;        // word 97
    ULONG  StreamingPerfGranularity;            // word 98, 99

    ULONG  Max48BitLBA[2];                      // word 100-103

    USHORT StreamingTransferTime;               // word 104. Streaming Transfer Time - PIO

    USHORT DsmCap;                              // word 105

    struct {
        USHORT LogicalSectorsPerPhysicalSector : 4;         // n power of 2: logical sectors per physical sector
        USHORT Reserved0 : 8;
        USHORT LogicalSectorLongerThan256Words : 1;
        USHORT MultipleLogicalSectorsPerPhysicalSector : 1;
        USHORT Reserved1 : 2;                               // bit 14 - shall be set to  1; bit 15 - shall be clear to 0
    } PhysicalLogicalSectorSize;                // word 106

    USHORT InterSeekDelay;                      //word 107.     Inter-seek delay for ISO 7779 standard acoustic testing
    USHORT WorldWideName[4];                    //words 108-111
    USHORT ReservedForWorldWideName128[4];      //words 112-115
    USHORT ReservedForTlcTechnicalReport;       //word 116
    USHORT WordsPerLogicalSector[2];            //words 117-118 Logical sector size (DWord)

    struct {
        USHORT ReservedForDrqTechnicalReport : 1;
        USHORT WriteReadVerify : 1;                 // The Write-Read-Verify feature set is supported
        USHORT WriteUncorrectableExt : 1;           // The WRITE UNCORRECTABLE EXT command is supported
        USHORT ReadWriteLogDmaExt : 1;              // The READ LOG DMA EXT and WRITE LOG DMA EXT commands are supported
        USHORT DownloadMicrocodeMode3 : 1;          // Download Microcode mode 3 is supported
        USHORT FreefallControl : 1;                 // The Free-fall Control feature set is supported
        USHORT SenseDataReporting : 1;              // Sense Data Reporting feature set is supported
        USHORT ExtendedPowerConditions : 1;         // Extended Power Conditions feature set is supported
        USHORT Reserved0 : 6;
        USHORT WordValid : 2;                       // shall be 01b
    }CommandSetSupportExt;                      //word 119

    struct {
        USHORT ReservedForDrqTechnicalReport : 1;
        USHORT WriteReadVerify : 1;                 // The Write-Read-Verify feature set is enabled
        USHORT WriteUncorrectableExt : 1;           // The WRITE UNCORRECTABLE EXT command is supported
        USHORT ReadWriteLogDmaExt : 1;              // The READ LOG DMA EXT and WRITE LOG DMA EXT commands are supported
        USHORT DownloadMicrocodeMode3 : 1;          // Download Microcode mode 3 is supported
        USHORT FreefallControl : 1;                 // The Free-fall Control feature set is enabled
        USHORT SenseDataReporting : 1;              // Sense Data Reporting feature set is enabled
        USHORT ExtendedPowerConditions : 1;         // Extended Power Conditions feature set is enabled
        USHORT Reserved0 : 6;
        USHORT Reserved1 : 2;                       // bit 14 - shall be set to  1; bit 15 - shall be clear to 0
    }CommandSetActiveExt;                       //word 120

    USHORT ReservedForExpandedSupportandActive[6];

    USHORT MsnSupport : 2;                      //word 127. obsolete
    USHORT ReservedWord127 : 14;

    struct {                                    //word 128
        USHORT SecuritySupported : 1;
        USHORT SecurityEnabled : 1;
        USHORT SecurityLocked : 1;
        USHORT SecurityFrozen : 1;
        USHORT SecurityCountExpired : 1;
        USHORT EnhancedSecurityEraseSupported : 1;
        USHORT Reserved0 : 2;
        USHORT SecurityLevel : 1;                   // Master Password Capability: 0 = High, 1 = Maximum
        USHORT Reserved1 : 7;
    } SecurityStatus;

    USHORT ReservedWord129[31];                 //word 129...159. Vendor specific

    struct {                                    //word 160
        USHORT MaximumCurrentInMA : 12;
        USHORT CfaPowerMode1Disabled : 1;
        USHORT CfaPowerMode1Required : 1;
        USHORT Reserved0 : 1;
        USHORT Word160Supported : 1;
    } CfaPowerMode1;

    USHORT ReservedForCfaWord161[7];                //Words 161-167

    USHORT NominalFormFactor : 4;                   //Word 168
    USHORT ReservedWord168 : 12;

    struct {                                        //Word 169
        USHORT SupportsTrim : 1;
        USHORT Reserved0    : 15;
    } DataSetManagementFeature;

    USHORT AdditionalProductID[4];                  //Words 170-173

    USHORT ReservedForCfaWord174[2];                //Words 174-175

    USHORT CurrentMediaSerialNumber[30];            //Words 176-205

    struct {                                        //Word 206
        USHORT Supported : 1;                           // The SCT Command Transport is supported
        USHORT Reserved0 : 1;                           // obsolete
        USHORT WriteSameSuported : 1;                   // The SCT Write Same command is supported
        USHORT ErrorRecoveryControlSupported : 1;       // The SCT Error Recovery Control command is supported
        USHORT FeatureControlSuported : 1;              // The SCT Feature Control command is supported
        USHORT DataTablesSuported : 1;                  // The SCT Data Tables command is supported
        USHORT Reserved1 : 6;
        USHORT VendorSpecific : 4;
    } SCTCommandTransport;

    USHORT ReservedWord207[2];                      //Words 207-208

    struct {                                        //Word 209
        USHORT AlignmentOfLogicalWithinPhysical: 14;
        USHORT Word209Supported: 1;                     // shall be set to 1
        USHORT Reserved0: 1;                            // shall be cleared to 0
    } BlockAlignment;

    USHORT WriteReadVerifySectorCountMode3Only[2];  //Words 210-211
    USHORT WriteReadVerifySectorCountMode2Only[2];  //Words 212-213

    struct {
        USHORT NVCachePowerModeEnabled: 1;
        USHORT Reserved0: 3;
        USHORT NVCacheFeatureSetEnabled: 1;
        USHORT Reserved1: 3;
        USHORT NVCachePowerModeVersion: 4;
        USHORT NVCacheFeatureSetVersion: 4;
    } NVCacheCapabilities;                  //Word 214. obsolete
    USHORT NVCacheSizeLSW;                  //Word 215. obsolete
    USHORT NVCacheSizeMSW;                  //Word 216. obsolete

    USHORT NominalMediaRotationRate;        //Word 217; value 0001h means non-rotating media.

    USHORT ReservedWord218;                 //Word 218

    struct {
        UCHAR NVCacheEstimatedTimeToSpinUpInSeconds;
        UCHAR Reserved;
    } NVCacheOptions;                       //Word 219. obsolete

    USHORT  WriteReadVerifySectorCountMode : 8;     //Word 220. Write-Read-Verify feature set current mode
    USHORT  ReservedWord220 : 8;

    USHORT  ReservedWord221;                //Word 221

    struct {                                //Word 222 Transport major version number
        USHORT  MajorVersion : 12;              // 0000h or FFFFh = device does not report version
        USHORT  TransportType : 4;
    } TransportMajorVersion;

    USHORT  TransportMinorVersion;          // Word 223

    USHORT  ReservedWord224[6];             // Word 224...229

    ULONG   ExtendedNumberOfUserAddressableSectors[2];  // Words 230...233 Extended Number of User Addressable Sectors

    USHORT  MinBlocksPerDownloadMicrocodeMode03;        // Word 234 Minimum number of 512-byte data blocks per Download Microcode mode 03h operation
    USHORT  MaxBlocksPerDownloadMicrocodeMode03;        // Word 235 Maximum number of 512-byte data blocks per Download Microcode mode 03h operation

    USHORT ReservedWord236[19];             // Word 236...254

    USHORT Signature : 8;                   //Word 255
    USHORT CheckSum : 8;

} IDENTIFY_DEVICE_DATA, *PIDENTIFY_DEVICE_DATA;
#pragma bitfield_order(pop)
#pragma pack(pop)

typedef struct _ATA_PASS_THROUGH {
	IDEREGS IdeReg;
	ULONG DataBufferSize;
	PVOID DataBuffer;
} ATA_PASS_THROUGH, *PATA_PASS_THROUGH;

typedef struct _FILE_NETWORK_OPEN_INFORMATION {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG FileAttributes;
} FILE_NETWORK_OPEN_INFORMATION, *PFILE_NETWORK_OPEN_INFORMATION;

typedef struct _XContent_DEVICEADDREMOVETASK {
	PCHAR pszDevicePath; //Only 0x40 used.
    DEVICESTATE Action;
    DWORD DeviceType; //XCONTENTDEVICETYPE_*
	DWORD DeviceID; //Output
} XContent_DEVICEADDREMOVETASK, *PXContent_DEVICEADDREMOVETASK;

#pragma endregion Structs

#pragma region

typedef BOOLEAN (*pfnXContentDeviceProcessAddRemove)(PXContent_DEVICEADDREMOVETASK pTask);
typedef VOID (*pfnBroadcastStorageDevicesChanged)();

EXTERN_C
{
    extern PXBOX_KRNL_VERSION XboxKrnlVersion;
	extern PXBOX_HARDWARE_INFO XboxHardwareInfo;
	extern PVOID IoDeviceObjectType;

	HRESULT
	WINAPI
	XNotifyQueueUI(	 
		IN DWORD dwType, //XNOTIFYUI_TYPE_*
		IN DWORD dwUserIndex,
		IN DWORD dwPriority, //XNOTIFYUI_PRIORITY_*
		IN LPCWSTR pwszStringParam,
		IN ULONGLONG qwParam
    );

	INT vsprintf(CHAR* Dest, const CHAR* Format, va_list Args);

	ULONG
	__cdecl
	DbgPrint(
		IN const CHAR* Format,
		IN ...
	);

	NTSYSAPI
	VOID
	NTAPI
    RtlInitAnsiString(
		OUT PANSI_STRING DestinationString,
		IN PSZ SourceString OPTIONAL
    );

	NTSYSCALLAPI
	NTSTATUS
	NTAPI
    NtOpenFile(
		OUT PHANDLE FileHandle,
		IN ACCESS_MASK DesiredAccess,
		IN POBJECT_ATTRIBUTES ObjectAttributes,
		OUT PIO_STATUS_BLOCK IoStatusBlock,
		IN ULONG ShareAccess,
		IN ULONG OpenOptions
    );

	NTSYSCALLAPI
	NTSTATUS
	NTAPI
    NtReadFile(
		IN HANDLE FileHandle,
		IN HANDLE Event OPTIONAL,
		IN PIO_APC_ROUTINE ApcRoutine OPTIONAL,
		IN PVOID ApcContext OPTIONAL,
		OUT PIO_STATUS_BLOCK IoStatusBlock,
		OUT PVOID Buffer,
		IN ULONG Length,
		IN PLARGE_INTEGER ByteOffset OPTIONAL
    );

	NTSYSCALLAPI
	NTSTATUS
	NTAPI
    NtWriteFile(
        IN HANDLE FileHandle,
        IN HANDLE Event OPTIONAL,
        IN PIO_APC_ROUTINE ApcRoutine OPTIONAL,
        IN PVOID ApcContext OPTIONAL,
        OUT PIO_STATUS_BLOCK IoStatusBlock,
        IN PVOID Buffer,
        IN ULONG Length,
        IN PLARGE_INTEGER ByteOffset OPTIONAL
    );

    NTSYSCALLAPI
	NTSTATUS
	NTAPI
    NtDeviceIoControlFile(
		IN HANDLE FileHandle,
		IN HANDLE Event OPTIONAL,
		IN PIO_APC_ROUTINE ApcRoutine OPTIONAL,
		IN PVOID ApcContext OPTIONAL,
		OUT PIO_STATUS_BLOCK IoStatusBlock,
		IN ULONG IoControlCode,
		IN PVOID InputBuffer OPTIONAL,
		IN ULONG InputBufferLength,
		OUT PVOID OutputBuffer OPTIONAL,
		IN ULONG OutputBufferLength
    );

	NTSYSCALLAPI
	NTSTATUS
	NTAPI
	NtQueryFullAttributesFile(
		IN POBJECT_ATTRIBUTES ObjectAttributes,
		OUT PFILE_NETWORK_OPEN_INFORMATION FileInformation
    );

	NTSYSCALLAPI
	NTSTATUS
	NTAPI
	NtClose(
		IN HANDLE Handle
    );

	NTKERNELAPI
	NTSTATUS
	ObReferenceObjectByName(
		IN POBJECT_STRING ObjectName,
		IN ULONG Attributes,
		IN PVOID ObjectType,
		IN OUT PVOID ParseContext OPTIONAL,
		OUT PVOID *Object
    );

	NTKERNELAPI
	VOID
	FASTCALL
	ObDereferenceObject(
		IN PVOID Object
    );

	NTKERNELAPI
	NTSTATUS
	IoDismountVolumeByName(
		IN POBJECT_STRING DeviceName
    );

	DWORD
	XeKeysGetStatus(
		OUT PDWORD StatusFlags
    );
}

#pragma endregion External Procedures