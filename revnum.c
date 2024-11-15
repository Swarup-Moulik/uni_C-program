#include<stdio.h>

int main()
{
    int num, revnum;
    printf("Enter a number :-");
    scanf("%d",&num);
    while(num>0)
    {
        revnum = revnum*10 + num%10;
        num/=10;
    }
    printf("The reversed number:- %d ",revnum);
    return 0;
}
