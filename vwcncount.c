#include<stdio.h>
#include<string.h>

int main()
{
char str[10000]; int nv = 0 , nc = 0 , dt = 0; int len = 0 , bs = 0 , sc = 0; int i = 0;
puts("Enter the string :-");
fgets(str, sizeof(str), stdin);
len = strlen(str);
for(i= 0; str[i]!='\0'; i++)
{
    if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
    {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            nv++;
        }
        else
        {
            nc++;
        }
    }
    else if(str[i]==32)
    {
        bs++;
    }
    else if (str[i] >= '0' && str[i] <= '9')
    {
        dt++;
    }

}
sc = len - bs - dt - nc - nv - 1;
printf("No. of vowels :- %d\n",nv);
printf("No. of consonants :- %d\n",nc);
printf("No. of special characters :- %d\n",sc);
printf("No. of digits :- %d\n",dt);
return 0;
}
