#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);

int main() {
    int start, end;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers in the range %d to %d are:\n", start, end);

    for (int i = start; i <= end; ++i)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}

bool isPrime(int num) {
    if (num < 1) {
        return false;
    }

    for (int i = 2; i <= num/2 ; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}
