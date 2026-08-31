# --- UEFI Core (Source) ---
# Diese werden automatisch vom Projekt eingebunden,
# Pfade im Binaries-Ordner sind hier auskommentiert um Fehler zu vermeiden.

# --- Qualcomm Drivers (Binaries) ---
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
INF AndromedaPkg/Driver/DisplayCallerDxe/DisplayCallerDxe.inf
INF AndromedaPkg/Driver/SimpleFbDxe/SimpleFbDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UFSDxe/UFSDxe.inf

# --- USB Stack ---
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbBusDxe/UsbBusDxe.inf
INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbKbDxe/UsbKbDxe.inf

# --- Andromeda / Nothing Extra ---
INF AndromedaPkg/Driver/RamPartitionDxe/RamPartitionDxe.inf

# --- Raw Files & Panels ---
FILE FREEFORM = DDE58710-41CD-4306-DBFB-3FA90BB1D2DD {
    SECTION UI = "uefiplat.cfg"
    SECTION RAW = KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/uefiplat.cfg
}

# Das Nothing Phone (1) Panel
FILE FREEFORM = D530D25C-D061-4B97-9FFA-C6945B0717B0 {
    SECTION UI = "Panel_rm692e5_fhd_plus_120hz_dsc_cmd.xml"
    SECTION RAW = KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_rm692e5_fhd_plus_120hz_dsc_cmd.xml
}

FILE FREEFORM = A91D838E-A5FA-4138-825D-455E23030794 {
    SECTION UI = "logo1.bmp"
    SECTION RAW = KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/logo1.bmp
}

FILE FREEFORM = A91D838E-A5FA-4138-825D-455E2303079E {
    SECTION UI = "BDS_Menu.cfg"
    SECTION RAW = KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/BDS_Menu.cfg
}
