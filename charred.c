#include<stdio.h>
#include<string.h>

int main()
{
char str1[10000], str2[10000]; int j = 0;
puts("Enter the string :-");
fgets(str1, sizeof(str1), stdin);
int len = strlen(str1);
printf("\nThe original string :- ");
puts(str1);
for(int i = 0; i<len; i++)
{
if ((str1[i] >= 'A' && str1[i] <= 'Z') || (str1[i] >= 'a' && str1[i] <= 'z') || str1[i] == 32)
{
 str2[j++] = str1[i];
}
}
printf("The modified string :- ");
puts(str2);
return 0;
}
