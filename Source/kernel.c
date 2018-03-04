#include "KLibrary/Library.c"
#include "Sources.c"

void kernel_start()
{
    init_descriptor_tables();
    vga_init();
    mem_init();
    tasking_init();
    
    printf("\nHello World");
    while(1);
}