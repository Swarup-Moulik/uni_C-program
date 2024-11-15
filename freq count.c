#include <stdio.h>

int main() {
    char str[10000];
    int i, freq[128] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 33 && str[i] <= 127)
        {
            freq[str[i]]++;
        }

    }
    printf("Character frequencies:\n");
    for (i = 33; i < 128; i++)
    {
        if (freq[i] != 0)
        {
            printf("%c : %d times\n", (char)i, freq[i]);
        }
    }
    return 0;
}
