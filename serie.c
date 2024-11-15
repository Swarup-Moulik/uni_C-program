#include<stdio.h>

int main()
{
    int n, a = 3, b = 4;
    printf("Enter the number of terms :- ");
    scanf("%d",&n);
    printf("The series :- \n");
    for(int i = 0; i<n; i++)
    {
        printf("%d  ",a);
        a = (a*10)+b;
        b = 7 - b;
    }
    return 0;
}
