#include <stdio.h>

 double fibonacci(double sayi);

 int main( )
 {
 double sonuc, sayi,i;

 printf( "Bir tamsay. giriniz: " );
 scanf( "%Lf", & sayi);
 sonuc = fibonacci(sayi);
 printf( "Fibonacci( %Lf ) = %Lf\n", sayi, sonuc);
 return 0;
 }

 
 int ilkSayi=0;
    int ikinciSayi=1;
    int toplam=0;
    int i;

    printf("%d\t",ilkSayi);
    printf("%d\t",ikinciSayi);

    for( i=0; i<sayi-2; i++)
    {
        toplam=ilkSayi+ikinciSayi;
        ilkSayi=ikinciSayi;
        ikinciSayi=toplam;
        printf("%d\t",toplam);

}
