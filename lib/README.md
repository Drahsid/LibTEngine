# libtengine

### What is libtengine?
libtengine is a library of headers that can be used to easily compile arbitrary code for games that derive from Turok 2's game engine. I have written this with multiple games and versions in mind, but currently this only has support for Turok 3's US release.

### How do I use this?
Before you can use this, you first need a few things:

- A C compiler that supports mips3. I personally use gcc-mips 10.2
- libultra. You can get this from the offical SDK, or from a reverse-engineering project like [libreultra](https://github.com/n64decomp/libreultra).

You need to set up the compiler environment so that libultra is in `<libultra>` (the compiler's search-include path).

After this, you are ready to get started. All you need to do to use this library is:
1. define the game, and release version. Below is a list of the currently supported defines

|Game|Releases|
|----|--------|
|GAME_TUROK3|RELEASE_US, RELEASE_EU, RELEASE_N4TKER18, RELEASE_N4TKER15, RELEASE_N4TKER10, RELEASE_N4TKER09|

 * Note that if you additionally define `LIBTENGINE_INCLUDE_ALL_TYPES`, every type will be included, and if you define `LIBTENGINE_INCLUDE_ALL`, everything will be included.

2. include `libtengine.h` and any other relevant files. For example, `libtengine/lib/CEngineApp.h`
3. That's it. Now you can compile code using libtengine.

