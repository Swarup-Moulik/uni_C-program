#include<stdio.h>

int pow(int x, int y)
{
    if(y>0)
     return x * pow(x,y-1);
    else
     return 1;
}

int main()
{
    int n, p, pv = 0;
    printf("Enter the number and pow :-\n");
    scanf("%d %d", &n, &p);
    pv = pow(n,p);
    printf("The powered value :- %d", pv);
    return 0;
}
