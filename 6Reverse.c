#include <stdio.h>
//反转字符串
int main() {
    long int m = 0;
    printf("Enter a long integer: ");
    scanf("%ld", &m);
    if (m < 0) {
        printf("-");
        m = -m;
    }

    int first = 1;
    printf("Reversed digits: ");
    while (m > 0) {
        int digit = m % 10;
        m /= 10;

        if (first) {
            printf("%d", digit);
            first = 0;
        } else {
            printf(",%d", digit);
        }
    }
    printf("\n");
    return 0;
}
