MEMORY
{
    FLASH (rx) : ORIGIN = 0x0000, LENGTH = 0x80000
    RAM (rwx) : ORIGIN = 0x10000100, LENGTH = 0x7f00
    RAM2 (rwx) : ORIGIN = 0x2007c000, LENGTH = 0x8000
}
ENTRY(Reset_Handler)
SECTIONS
{
    .text :
    {
        KEEP(*(.isr_vector))
        . = 0x000002FC ;
        KEEP(*(.CRPSection))
        *(.text*)
        KEEP(*(.init))
        KEEP(*(.fini))
        *crtbegin.o(.ctors)
        *crtbegin?.o(.ctors)
        *(EXCLUDE_FILE(*crtend?.o *crtend.o) .ctors)
        *(SORT(.ctors.*))
        *(.ctors)
        *crtbegin.o(.dtors)
        *crtbegin?.o(.dtors)
        *(EXCLUDE_FILE(*crtend?.o *crtend.o) .dtors)
        *(SORT(.dtors.*))
        *(.dtors)
        *(.rodata*)
        KEEP(*(.eh_frame*))
    } > FLASH
    .ARM.extab :
    {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } > FLASH
    __exidx_start = .;
    .ARM.exidx :
    {
        *(.ARM.exidx* .gnu.linkonce.armexidx.*)
    } > FLASH
    __exidx_end = .;
    __etext = .;
    .data : AT (__etext)
    {
        __data_start__ = .;
        Image$$RW_IRAM1$$Base = .;
        *(vtable)
        *(.data*)
        . = ALIGN(4);
        PROVIDE (__preinit_array_start = .);
        KEEP(*(.preinit_array))
        PROVIDE (__preinit_array_end = .);
        . = ALIGN(4);
        PROVIDE (__init_array_start = .);
        KEEP(*(SORT(.init_array.*)))
        KEEP(*(.init_array))
        PROVIDE (__init_array_end = .);
        . = ALIGN(4);
        PROVIDE (__fini_array_start = .);
        KEEP(*(SORT(.fini_array.*)))
        KEEP(*(.fini_array))
        PROVIDE (__fini_array_end = .);
        . = ALIGN(4);
        __data_end__ = .;
    } > RAM
    .bss_RAM2 (NOLOAD):
    {
        Image$$RW_IRAM2$$Base = . ;
        *(.bss.$RAM2*)
        *(AHBSRAM0)
       . = ALIGN(4) ;
        Image$$RW_IRAM2$$ZI$$Limit = .;
    } > RAM2
    .bss :
    {
        __bss_start__ = .;
        *(.bss*)
        *(COMMON)
        __bss_end__ = .;
        Image$$RW_IRAM1$$ZI$$Limit = . ;
    } > RAM
    .heap :
    {
        __end__ = .;
        end = __end__;
        *(.heap*)
        __HeapLimit = .;
    } > RAM
    .stack_dummy :
    {
        *(.stack)
    } > RAM
    __StackTop = ORIGIN(RAM) + LENGTH(RAM);
    __StackLimit = __StackTop - SIZEOF(.stack_dummy);
    PROVIDE(__stack = __StackTop);
    ASSERT(__StackLimit >= __HeapLimit, "region RAM overflowed with stack")
}