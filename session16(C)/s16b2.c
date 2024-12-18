#include <stdio.h>
#include <stdlib.h>
void swap(int *numberPtr1 , int *numberPtr2);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    swap(&a,&b);
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    return 0;
}
void swap(int *numberPtr1 , int *numberPtr2){
    int temp = *numberPtr1;
    *numberPtr1=*numberPtr2;
    *numberPtr2=temp;
}