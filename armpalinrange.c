#include<stdio.h>
#include<math.h>
int main()
{
int lr,hr, i, sum = 0, c1, c2, cd, dgt, pdgt = 1;
printf("Enter the lower and higher range :- ");
scanf("%d %d",&lr, &hr);
printf("The armstrong numbers are :- \n");
for(int k = lr; k<= hr; k++)
{
c1 = k; c2 =k;
while(c1>0)
{
cd++;
c1/=10;
}
while(c2>0)
{
dgt = c2 % 10; pdgt = 1;
for(int i = 0; i<cd; i++)
{
    pdgt= pdgt * dgt;
}
sum = sum + pdgt;
pdgt = 1;
c2/=10;
}
if(k == sum)
printf("%d ",k);
cd = 0; sum = 0;
}
return 0;
}
