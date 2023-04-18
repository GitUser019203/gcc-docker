#include <stdio.h>

char* print_flag()
{
        return "CTF_SDaT{Reverse_Engineering!}";
}

int main()
{
    printf("There's a secret flag in here.\n");
    printf("Here's a hint: Use gdb, the word \'flag\' and the char* pointer\n");
    return 0;
}
