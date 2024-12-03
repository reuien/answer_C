#include <stdio.h>
//拷贝字符串
void Strcopy(char *s1, char *s2) {
    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

int main() {
    char s1[100];
    char s2[100];
    printf("请输入字符串s1: ");
    scanf("%99s", s2);
    Strcopy(s1, s2);

    printf("复制后的字符串s2: %s\n", s1);

    return 0;
}
