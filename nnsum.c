#include<stdio.h>

int nsum(int hn)
{
    if(hn > 0)
        return hn + nsum(hn - 1);
    else
        return 0;
}

int main()
{
    int num, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    sum = nsum(num);
    printf("The sum of natural numbers: %d", sum);
    return 0;
}
