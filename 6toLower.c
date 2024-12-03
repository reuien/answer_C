#include <stdio.h>
void toLower(char* s){
     for(int i=0;s[i]!='\0';i++){
       if(s[i]>='A'&&s[i]<='Z')
           s[i]+=32;
     }
}
int main() {
    char str[100]={0};
    scanf("%99s",str);
    toLower(str);
    printf("%s",str);
    return 0;
}





