#include<stdio.h>
#include<string.h>
int main()
{
char str[10000],str2[10000];
int len,j = 0;
puts("Enter the string :-");
fgets(str,sizeof(str),stdin);
len = strlen(str);
for(int i = 0; i<len; i++)
{
if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
{
str2[j++] = str[i];
}
}
printf("Modified string :- \n%s\n",str2);
return 0;
}
