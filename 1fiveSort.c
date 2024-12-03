
#include <stdio.h>
void sort(int *arr,int length);
int main(){
  int arr[5]={0};
  for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
  }
  sort(arr,5);
  for(int i=0;i<5;i++){
    printf("%d",arr[i]);}
  return 0;
}
//排序
void sort(int *arr,int length){
  for(int i=0;i<length;i++){
    for(int j=i;j<length;j++){
      if(arr[i]>arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
}



