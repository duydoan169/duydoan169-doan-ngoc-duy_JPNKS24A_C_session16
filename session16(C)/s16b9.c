#include<stdio.h>
#include<stdlib.h>
void addElement(int *arr, int value, int index, int *n);
int main(){
    int *arr;
    int n, value, index;
    printf("moi ban nhap so luong phan tu: ");
    scanf("%d", &n);
    arr= (int *)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        printf("phan tu thu %d la: ", i+1);
        scanf("%d", arr+i);
    }
    for(int i=0; i<n; i++){
        printf("%d ", *(arr+i));
    }
    printf("\nnhap gia tri muon them: ");
    scanf("%d", &value);
    printf("\nnhap vi tri muon them: ");
    scanf("%d", &index);
    arr= realloc(arr, (n+1)*sizeof(int));
    addElement( arr, value, index, &n);
    for(int i=0; i<n; i++){
        printf("%d ", *(arr+i));
    }
    free(arr);
    return 0;
}

void addElement(int *arr, int value, int index, int *n){
    for(int i=(*n); i>index; i--){
        *(arr+i)=*(arr+i-1);
    }
    *(arr+index)=value;
    (*n)++;
}