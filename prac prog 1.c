#include<stdio.h>
int main ()
{
int n, i , j = 0 ;
printf("Enter the number of lines :- ");
scanf("%d",&n);
printf("The pattern :- \n");
for(i = 1; i<=n ; i++)
{
    for(j = i; j>=1; j--)
    {
        printf("%d ",j);
    }
    printf("\n");
}
return 0;
}
