#include <stdio.h>
#include <stdlib.h>
int A[6];
void add(int *arrPtr);
int main()
{
    for(int i=0; i<5; i++){
        scanf("%d",&A[i]);
    }
    add(A);
    for(int i=0; i<6; i++){
        printf("%d ",A[i]);
    }
    printf("Hello world!\n");
    return 0;
}

void add(int *arrPtr){
    int index,value;
    printf("gia tri can them:");
    scanf("%d",&index);
    printf("vi tri can them:");
    scanf("%d",&value);
    for(int i=5; i>=index; i--){
        *(arrPtr+i)=*(arrPtr+i-1);
    }
    *(arrPtr+index)=value;
}