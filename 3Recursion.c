#include <stdio.h>
int fun(int x){
  if (x<=1) {
    return 1;
  }
  return x*fun(x-1);
}
int main(){
  int x=0;
  scanf("%d",&x);
  int res=fun(x);
  printf("%d",res);
  return 0;

}