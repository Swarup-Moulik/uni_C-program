#include<stdio.h>

int main() {
    char s1[100] ;
    int len, j = 0, i;
    puts("Enter the string :-");
    gets(s1);
    len = strlen(s1);
    for(i = 0; i<=len/2; i++)
    {
        if(s1[i]!=s1[len-1])
        {
            break;
        }
        else
        {
            len--;
        }

    }
    if(i>len/2)
        printf("Palindrome string.\n");
    else
        printf("Not a palindrome string.\n");

    return 0;
}
