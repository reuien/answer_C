#include <stdio.h>
#include <string.h>
//链接两个字符串
void StrLink(char* s1,char *s2){
    while(*s1){
        s1++;
    }
    while(*s2){
        *s1=*s2;
        s1++;
        s2++;
    }
    *s1='\0';
}

int main(){
    char str1[1000]={0};
    scanf("%99s",str1);
    char str2[100]={0};
    scanf("%99s",str2);
    StrLink(str1,str2);
    printf("%s",str1);
    return 0;
}
