#include <stdio.h>
//小写变大写
void toUpper(char* s){
  for (int i=0;s[i]!='\0';i++) {
    if (s[i]>='a'&&s[i]<='z') {
      s[i]-=32;
    }
  }
}

int main(){
  char s[100]={0};
  scanf("%99s",s);
  toUpper(s);
  printf("%s",s);
  return 0;
}
