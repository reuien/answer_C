#include <stdio.h>
#include <sys/socket.h>
int main(){
  //n*N的方阵
  int n=4;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      printf("%d ",i+(j-1)*n);
    }printf("\n");
  }
  return 0;

}

