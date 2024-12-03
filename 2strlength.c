//
// 求字符串长度
//
#include <stdio.h>
int StrLength(char* str){
    int i=0;
    int cout=0;
    while(str[i]!='\0'){
      cout++;
      i++;
      }
   return cout+1;
  }
int main(){
    char str[100];
    scanf("%s99",str);
    int x=StrLength(str);
    printf("%d",x);
    return 0;
  }
