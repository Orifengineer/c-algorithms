#include <stdio.h>

int main() {
    char word[100];
    int length = 0;

    printf("Enter a word: ");
    scanf("%99s", word);

    while (word[length] != '\0') {
        printf("%c\n", word[length]);
        length++;
    }

    printf("Length: %d\n", length);

    return 0;
}
