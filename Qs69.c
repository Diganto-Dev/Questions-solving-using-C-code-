// Remove duplicate characters from a string using recursion.
#include <stdio.h>

void removeDuplicates(char str[], int i, int j)
{
    if (str[i] == '\0')
    {
        str[j] = '\0';
        return;
    }

    int k;
    for (k = 0; k < j; k++)
    {
        if (str[k] == str[i])
            break;
    }

    if (k == j)
    {
        str[j] = str[i];
        removeDuplicates(str, i + 1, j + 1);
    }
    else
    {
        removeDuplicates(str, i + 1, j);
    }
}

int main()
{
    char str[] = "programming";

    removeDuplicates(str, 0, 0);

    printf("String after removing duplicates: %s", str);

    return 0;
}