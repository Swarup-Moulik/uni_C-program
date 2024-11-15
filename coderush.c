#include<stdio.h>
int main()
{
    int N, D, t = 1, T, result, c = 0;
    scanf("%d", &T);
while(t<=T)
{
    scanf("%d %d", &N, &D);
    for(result = 1; result<=9; result++)
    {
        N =  N+result;
        while (N > 0)
        {
         if (N % 10 == D)
         {
            c++;
         }
         N /= 10;
        }
    }
    printf("%d ", result);
}
return 0;
}

