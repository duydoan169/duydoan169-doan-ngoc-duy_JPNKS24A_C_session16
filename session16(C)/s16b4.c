#include <stdio.h>
#include <stdlib.h>
int A[5];
void array(int *arrPtr);
int main()
{
    int *arrPtr=A;
    for(int i=0; i<5; i++){
        scanf("%d",&A[i]);
    }
    array(arrPtr);
    printf("Hello world!\n");
    return 0;
}
void array(int *arrPtr){
    for(int i=0;i<5;i++){
        printf("A[%d]: ",i+1);
        printf("%d\n",*(arrPtr+i));
    }
}