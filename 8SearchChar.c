#include <stdio.h>
int Search(char* s,char target){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==target){
          return 1;
        }
    }return 0;
}
int main(){
    char target=0;
    scanf("%c",&target);
    char s[100]={0};
    scanf("%99s",s);
    int x=Search(s,target);
    printf("%d",x);
    return 0;
}