#include <stdio.h>
int main()
{
    double i, n, terim1 = 0, terim2 = 1, sonraki;
    

    printf("hangi terimi istiyorsun:\n ");
    scanf("%Lf", &n);



    for (i = 1; i < n; ++i)
    {
    
        sonraki = terim1 + terim2;
        terim1 = terim2;
        terim2 = sonraki;
    }
    printf("%Lf. Terim: %Lf ", n,sonraki);
    return 0;
}
