#include<stdio.h>
int main()
{
int a[10][10], n, sum = 0, rj, j=0;
printf("Enter the dimension of the square matrix :- ");
scanf("%d",&n);
rj = n-1;
printf("Enter the elements in the array :- \n");
for(int i = 0; i<n; i++)
{
for(int j = 0; j<n; j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The matrix :-\n");
for(int i = 0; i<n; i++)
{
for(int j = 0; j<n; j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(int i = 0; i<n; i++)
{
if(j==rj)
    sum = a[i][j];
else
    sum = a[i][j] + a[i][rj];
printf("Sum of %dth row's elements of the matrix :- %d\n",i+1,sum);
--rj;++j;
}
return 0;

}
