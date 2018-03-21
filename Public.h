/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_hidemulationdriver,
    0x48ac69eb,0xf71b,0x46ce,0x9d,0x92,0xae,0x77,0xba,0x3c,0xa8,0xab);
// {48ac69eb-f71b-46ce-9d92-ae77ba3ca8ab}
