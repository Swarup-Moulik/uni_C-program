#include<stdio.h>

int nfac(int hn)
{
    if(hn > 0)
        return hn * nfac(hn - 1);
    else
        return 1;
}

int main()
{
    int num, f = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    f = nfac(num);
    printf("The factorial of the natural number:- %d", f);
    return 0;
}
