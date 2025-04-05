#include <stdio.h>
#include <conio.h>

int main()
{
    int sayac, enkucuk, x, basla;

    printf("Gireceginiz sayi adetini belirtin: ");
    scanf("%d", &sayac);

    printf("\nSayi giriniz: ");
    scanf("%d", &x);

    enkucuk=x;

    for(basla=1;basla<=sayac-1;basla++){
            if(x<enkucuk)
                enkucuk=x;
            printf("\nSayi giriniz: ");
            scanf("%d", &x);
    }

    if(x<enkucuk)
        enkucuk=x;

    printf("\nGirdiginiz en kucuk sayi: %d", enkucuk);



}
