OUTPUT_ARCH(mips)
OUTPUT_FORMAT("elf32-bigmips")

SECTIONS
{
   .text 0x00700000 :
    {
        *(.text);
        . = ALIGN(32);
    }

    .data 0x80740000 :
    {
        *(.data);
        *(.data.*);
		*(.sdata);
		. = ALIGN(32);
    }

    .rodata 0x80780000 :
    {
		*(.rodata);
		*(.rodata.*);
		. = ALIGN(32);
    }

    .initsysrc 0x002439f0 :
    {
        *(.initsysrc);
        . = ALIGN(32);
    }
}