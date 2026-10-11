// Valid string Palindrome
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char str[], int n) {
    int st = 0, end = n - 1;

    while (st < end) {
        if (str[st] != str[end]) {
            printf("Not a valid palindrome\n");
            return false;
        }

        st++;
        end--;
    }

    printf("Valid palindrome\n");
    return true;
}

int main() {
    char word[] = "racecar";

    isPalindrome(word, strlen(word));

    return 0;
}
