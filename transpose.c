#include<stdio.h>
int main()
{
int a[10][10], r, c;
printf("Enter the number of rows and columns :- \n");
scanf("%d %d",&r,&c);
printf("Enter the elements in the matrix :-\n");
for(int i = 0; i<r; i++)
{
for(int j = 0; j<c; j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The matrix :- \n");
for(int i = 0; i<r; i++)
{
for(int j = 0; j<c; j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("The transposed matrix :- \n");
for(int i = 0; i<r; i++)
{
for(int j = 0; j<c; j++)
{
printf("%d ",a[j][i]);
}
printf("\n");
}
return 0 ;
}
