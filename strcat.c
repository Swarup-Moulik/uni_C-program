#include <stdio.h>
#include <string.h>
int main() {
    char str1[100];
    char str2[100];
    char str3[100];
    int len1, len2 = 0;
    int j = 0;

    puts("Enter the string :-");
    fgets(str1, sizeof(str1), stdin);
    puts("Enter the string :-");
    fgets(str2, sizeof(str2), stdin);
    len1 = strlen(str1);
    len2 = strlen(str2);

    for(int i = 0; i<len1; i++)
    {
      str3[j++] = str1[i];
    }
    --j;
    for(int i = 0; i<len2; i++)
    {
      str3[j++] = str2[i];
    }
    --j;
    printf("The concateneted string :- ");
    puts(str3);
    return 0;
}
