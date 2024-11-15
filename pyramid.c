#include<stdio.h>

int main()
{
int n;
printf("Enter the number of lines :- ");
scanf("%d",&n);
for(int r = 1; r<=n; r++)
{
for(int s = n-r; s>=0; s--)
{
printf(" ");
}
for(int c = 1; c<=r; c++)
{
printf("* ");
}
printf("\n");
}
}
