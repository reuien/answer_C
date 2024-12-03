#include <stdio.h>
#include <math.h>
//判断素数
void IsPrime(int x){
  if(x<=1){
    printf("NO");
    }
  else {
    for (int i=2;i<=sqrt(x);i++) {
      if (x%i==0) {
        printf("NO");
        return;
      }
    }printf("YES");
  }
}




int main(){
  int x=0;
  scanf("%d",&x);
  IsPrime(x);
  return 0;
  }
