#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;

    printf("Terim sayisini girin: ");
    scanf("%d", &n);

    printf("Fibonacci Dizisi : ");

    for (i = 1; i <= n; ++i)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
            printf("%d, ", t1);

    return 0;
}
