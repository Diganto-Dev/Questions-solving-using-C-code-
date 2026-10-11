// Convert to UpperCase
#include <stdio.h>
#include <string.h>

void toUpper(char word[], int n) {
    for (int i = 0; i < n; i++) {
        char ch = word[i];

        if (ch >= 'a' && ch <= 'z') {
            word[i] = ch - 'a' + 'A';
        }
    }
}

int main() {
    char word[] = "ApPle";

    toUpper(word, strlen(word));

    printf("%s\n", word);

    return 0;
}
