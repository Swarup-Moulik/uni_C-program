#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
int dec, rem, i=0, len, k=0,choice,bn;
char bin[100], binf[100];
printf("Enter your choice :- \n1.) To convert decimal to binary.\n2.) To convert binary to decimal.\n");
scanf("%d", &choice);
switch(choice)
{
case 1 :
printf("Enter the decimal number :- ");
scanf("%d",&dec);
while(dec>0)
{
rem = dec%2;

if(rem == 0)
 bin[i++] = '0';
else if(rem == 1)
 bin[i++] = '1';

dec/=2;
}
len = strlen(bin);
for(int j = len-1; j>=0; j--)
{
binf[k++] = bin[j];
}
printf("The binary number :- %s\n",binf);
break;
case 2:
    printf("Enter the binary number :- ");
    scanf("%d",&bn);
    while(bn>0)
    {
        rem = bn%10;
        dec = dec + rem*pow(2,i++);
        bn/=10;
    }
    printf("Decimal number :- %d\n", dec);
break;
default :
printf("Wrong input.\n");
break;
return 0;
}
}
