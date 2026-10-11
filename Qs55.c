// Reverse a Char Array 
#include <stdio.h>
#include <string.h>

void reverse(char word[], int n) {
    int st = 0, end = n - 1;

    while (st < end) {
        char temp = word[st];
        word[st] = word[end];
        word[end] = temp;

        st++;
        end--;
    }
}

int main() {
    char word[] = "diganto";

    reverse(word, strlen(word));
    printf("Reverse = %s\n", word);

    return 0;
}
