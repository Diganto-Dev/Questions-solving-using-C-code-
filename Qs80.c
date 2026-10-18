// Find "sunset" in a Given String
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[] = "sunset";

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (strstr(str, word) != NULL) {
        printf("Sunset found in the string.\n");
    } else {
        printf("Sunset not found in the string.\n");
    }

    return 0;
}
