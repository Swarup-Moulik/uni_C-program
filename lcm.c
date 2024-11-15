#include<stdio.h>

int main() {
    int a, b, d, c1, c2, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c1 = a; c2 = b;
    while(b != 0)
    {
        d = b;
        b = a%b;
        a = d;
    }
    lcm = (c1*c2)/a;
    printf("LCM: %d", lcm);
    return 0;
}
