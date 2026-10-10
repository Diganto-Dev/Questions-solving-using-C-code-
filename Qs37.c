// Find the frequency of each digit in a number.
#include <stdio.h>

int main() {
    int n = 1223451;
    int lastdigit;
    int freq[10] = {0};

    while (n > 0) {
        lastdigit = n % 10;
        freq[lastdigit]++;
        n = n / 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d occurs %d times\n", i, freq[i]);
    }

    return 0;
}
