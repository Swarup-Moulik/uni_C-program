#include<stdio.h>

int main()
{
    int num, pownum=1, pow;
    printf("Enter a number and pow:-");
    scanf("%d %d",&num,&pow);
    for(int i = 1; i<= pow; i++)
    {
        pownum*=num;
    }
    printf("The power of the number:- %d ",pownum);
    return 0;
}
