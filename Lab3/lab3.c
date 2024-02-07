#include <stdio.h>

void fn(char *a)
{
    char buf[42];
    strcpy(buf, a);
    printf("You entered %s\n", buf);
}

main(int argc, char *argv[])
{
    fn(argv[1]);
}