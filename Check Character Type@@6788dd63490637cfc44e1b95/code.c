#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("'%c' is a Vowel.\n", ch);
        } else {
            printf("'%c' is a Consonant.\n", ch);
        }
    } else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a Digit.\n", ch);
    } else {
        printf("'%c' is a Special character.\n", ch);
    }

    return 0;
}