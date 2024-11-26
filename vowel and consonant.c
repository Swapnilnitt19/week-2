#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
    
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;  
        }

        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("The character is a vowel.\n");
        } else {
            printf("The character is a consonant.\n");
        }
    } else {
        printf("The character is not an alphabet letter.\n");
    }

    return 0;
}

