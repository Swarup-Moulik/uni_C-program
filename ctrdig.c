#include<stdio.h>

int main()
{
    int num, c;
    printf("Enter a number :-");
    scanf("%d",&num);
    while(num>0)
    {
        c++;
        num/=10;
    }
    printf("The number of digits :- %d ",c);
    return 0;
}
