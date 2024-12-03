#include <stdio.h>
int main(){
  int m=0,n=0;
  scanf("%d,%d",&m,&n);
  int sum=0;
  for(int i=m;i<=n;i++){
    sum+=i;
    }
  printf("%d",sum);//m_n之间的和
  return 0;
}
