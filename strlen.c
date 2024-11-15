#include <stdio.h>

int main() {
    char str[10000];
    int len = 0, i = 0;

    puts("Enter the string :-");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        len++;
        i++;
    }

    printf("The length of the string :- %d\n", len);

    return 0;
}
