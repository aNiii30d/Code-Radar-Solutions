#include <stdio.h>

int main() {
    int num, i = 2;

    scanf("%d", &num);

    if (num <= 1) {
        printf("Not Prime");
    } else if (num == 2) {
        printf("Prime");
    } else {
        while (i < num) {
            if (num % i == 0) {
                printf("Not Prime");
                break;
            }
            i++;
        }
        if (i == num) {
            printf("Prime");
        }
    }

    return 0;
}
