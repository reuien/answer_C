#include <stdio.h>
//往数组里插入元素
void Insert(int arr[], int *size, int num) {
    int i;
    for (i = 0; i < *size; i++) {
        if (arr[i] > num) {
            for (int j = *size; j > i; j--) {
                arr[j] = arr[j - 1];
            }
            arr[i] = num;
            *size = *size + 1;
            return;
        }
    }
    arr[*size] = num;
    (*size)++;
}


int main(){
    int arr[]={2,4,7,9,14,38,76,1000};
    int x=0;
    scanf("%d",&x);
    int size = sizeof(arr)/sizeof(int);
    Insert(arr,&size,x);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
