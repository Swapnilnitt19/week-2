#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is an uppercase letter.\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character is a lowercase letter.\n");
    }
    else {
        printf("The character is not an alphabet letter.\n");
    }

    return 0;
}

