#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int k = 0; k < x - i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
