#include <stdio.h>

int  Delete(int *arr,int x,int n){
  int fast=0;
  int slow=0;
  for(fast=0;fast<n;fast++){
    if(arr[fast]!=x){
      arr[slow]=arr[fast];
      slow++;
      }
  }return slow;
}
int main(){
  int arr[100];
  int n=0;
  printf("请输入数组的长度：");
  scanf("%d",&n);
  int x=0;
  printf("请输入想删除的值：");
  scanf("%d",&x);
  printf("请录入数组中的元素");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int n1=Delete(arr, x, n);
  for(int i=0;i<n1;i++){
    printf("%d ",arr[i]);
  }

  return 0;
}
