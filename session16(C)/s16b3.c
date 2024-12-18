#include <stdio.h>
#include <stdlib.h>
int tong(int *a, int *b);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int tongt=tong(&a,&b);
    printf("tong cua %d va %d la %d\n",a,b,tongt);
    printf("Hello world!\n");
    return 0;
}
int tong(int *a, int *b){
    int tongt = *a + *b ;
    return tongt;
}