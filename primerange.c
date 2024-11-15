#include<stdio.h>

int main()
{
int lr, hr, c, c1;
printf("Enter the lower and higher range :- ");
scanf("%d %d",&lr, &hr);
printf("The prime numbers are :- \n");
for(int k = lr; k<= hr; k++)
{
    c = 0;
    int c1 = k;
    for(int l = 2; l<= k/2; l++)
    {
        if(c1%l == 0)
        c++;
    }
    if(c==0)
    printf("%d ",k);
}
return 0;
}
