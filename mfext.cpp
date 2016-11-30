#include "mfext.h"

EXT_API_VERSION g_ExtApiVersion = {
	(VER_PRODUCTVERSION_W >> 8),
	(VER_PRODUCTVERSION_W & 0xff),
	EXT_API_VERSION_NUMBER64,
	0
};
WINDBG_EXTENSION_APIS ExtensionApis = { 0 };
USHORT g_MajorVersion = 0;
USHORT g_MinorVersion = 0;

LPEXT_API_VERSION ExtensionApiVersion(VOID)
{
	return &g_ExtApiVersion;
}

VOID WinDbgExtensionDllInit(
	PWINDBG_EXTENSION_APIS lpExtensionApis,
	USHORT usMajorVersion,
	USHORT usMinorVersion
)
{
	ExtensionApis = *lpExtensionApis;
	g_MajorVersion = usMajorVersion;
	g_MinorVersion = usMinorVersion;
}

DECLARE_API(test)
{
	dprintf("MajorVersion => %d\n", g_MajorVersion);
	dprintf("MinorVersion => %d\n", g_MinorVersion);
}