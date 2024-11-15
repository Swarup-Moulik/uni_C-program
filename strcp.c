#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100], s2[100];
    int i, j = 0;

    printf("Enter the string: ");
    fgets(s1, sizeof(s1), stdin);

    int l1 = strlen(s1);

    for(i = 0; i < l1; i++)
    {
        if(s1[i] == '\0' || s1[i] == '\n')
            break;
        else
        {
            s2[j++] = s1[i];
        }
    }

    s2[j] = '\0';

    printf("Copied string: %s\n", s2);

    return 0;
}
