#include<stdio.h>

int main() {
    int a, b, d;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while(b != 0)
    {
        d = b;
        b = a%b;
        a = d;
    }
    printf("HCF: %d", a);
    return 0;
}
