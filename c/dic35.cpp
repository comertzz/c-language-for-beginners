#include<stdio.h>
int main()
{

int i,j,n;

    printf("n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)// n-i, 5-1'den 4 tane bo�luk koy demek
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)//Burada bo�luktan sonra bir tane y�ld�z koyar
        {
            printf("*");
        }
        printf("\n");
    }
return 0;

}
