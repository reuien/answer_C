#include <stdio.h>
int FindLoc(char *s, char ch){
     for(int i=0;s[i]!='\0';i++){
         if(s[i]==ch){
           return i;
           }
     }return -1;
}//找元素，找到返回位置，没找到返回-1
int main(){
    char ch;
    scanf("%c",&ch);
    char s[100];
    printf("请输入字符串: ");
    scanf("%99s", s);

    int x=FindLoc(s,ch);
    printf("%d",x);
    return 0;
    }
