# LibTEngine
A code [library](lib) for games that derive from Turok 2's game engine which currently supports Turok 2 and Turok 3

# What is this?
This is a code [library](lib) for games that derive from Turok 2's game engine.<br>
The library contains structures and function signatures which I have defined from reverse engineering games which are or derive from Turok 2.<br>
This means that you can write C code that will run in the context of one of the Turok2-engine games, thus the name "libtengine," or Library for Turok\[2] Engine, you can find example code [here](examples)<br>

If you are just here for the mneonics:
- Documentation on the mneonics of Turok 2 can be found [here](TUROK2.md)
- Documentation on the mneonics of Turok 3 can be found [here](TUROK3.md)

# How was this done, what tools did you use?
To do this, I have used various tools:
- [Project64](https://github.com/project64/project64) for the great in-dev debugger
- [ModLoader64](https://github.com/hylian-modding/ModLoader64) for some debugging utilities I wrote
- [Ida](https://www.hex-rays.com/products/ida/) for the disassembler and opcode utilities
- [Ghidra](https://github.com/NationalSecurityAgency/ghidra), and by extension [N64LoaderWV](https://github.com/zeroKilo/N64LoaderWV) to keep track of how the games utilize structures (and to help define them)
- [Mips To C](https://github.com/matt-kempster/mips_to_c) for the excellent pseudocode

# Special Thanks
[Kaiser](https://github.com/svkaiser) has been very helpful!<br>
Badger and DoomMarine from the Turok community for testing my shenanigans


