# Xbox 360 Bad Storage

For more information, check out the official project page: https://fatxplorer.eaton-works.com/bad-storage/

Bad Storage comes in 2 flavors: XEX and DLL. The XEX version is for when you want to have a convenient, launchable executable. The DLL is for developers who want to add Bad Storage to their homebrew apps or launchers.

The DLL is not a system module. It should be loaded, executed, and then unloaded from memory once. The changes stick until the console is cold rebooted or shutdown. For example usage of the DLL, <a href="https://github.com/Byrom90/XeUnshackle/pull/62">check out the XeUnshackle implementation</a>.

**For those who do not code and just want to download/use Bad Storage:** it is built into the latest version of <a href="https://github.com/Byrom90/XeUnshackle">XeUnshackle</a>, so just download that and it is all you need. Make sure to format your drive using FATXplorer as well.

# Compiling

The recommended development environment is:
- Windows 7 SP1 (a VM is perfectly fine)
- Microsoft Visual Studio 2010 SP1
- Microsoft Xbox 360 SDK (any version should do)

Bad Storage should compile out of the box. There are a few build configurations:
- **Debug:** Builds with debug libraries and settings. Use this for testing/development on XDK kernels only. This will not launch on retail.
- **Debug_Retail:** Builds with debug libraries and settings. Use this for testing/development on retail kernels only.
- **Release:** Builds a fully optimized version. Use this to build a version for normal use.

If you need to debug anything, that will be slightly tricky because until Bad Storage is executed, the internal drive will not be usable, and Visual Studio will always want to deploy to the internal drive.

# Support

The <a href="https://github.com/EatonZ/XDON/issues">GitHub issue tracker</a> is open for your questions.

# Legal

The <a href="https://choosealicense.com/licenses/mit/">MIT License</a> applies to this project. You are welcome to add the Bad Storage DLL or code to your projects - just give credit where appropriate.

No XDK installers or individual components/dlls from the XDK will be provided here. Please don't ask.
