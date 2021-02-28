# Namedump
This is an example project that dumps the name of each level to the address 0x80750000 in rdram.

I tested this with the defines `-DGAME_TUROK3 -DRELEASE_US`

## Building
To build, run mips-gcc on main.c using mips3, and the VR4300 arch. Make sure libtengine is in the include path.

