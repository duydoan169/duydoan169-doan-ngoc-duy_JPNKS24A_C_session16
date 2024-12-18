#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=1;
    int *numberPtr = &number;
    printf("dia chi cua bien: %d\n",&numberPtr);
    printf("gia tri cua bien: %d\n",*numberPtr);
    printf("Hello world!\n");
    return 0;
}