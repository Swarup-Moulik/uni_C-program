#include<stdio.h>

int gcd(int x, int y)
{
    if(y > 0)
        return gcd(y, x%y);
    else
        return x;
}

int main()
{
    int a, b, hcf = 0;
    printf("Enter two numbers :- ");
    scanf("%d %d", &a, &b);
    hcf = gcd(a,b);
    printf("The GCD :- %d", hcf);
    return 0;
}
