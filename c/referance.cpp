#include <stdio.h>

 void referansaGoreKup ( int * ); /* prototip */

 int main( )
 {
 int sayi = 5;

 printf( "Sayýnýn esas deðeri %d", sayi);
 referansaGoreKup( &sayi);
 printf( "\nSayýnýn yeni deðeri %d\n", sayi);

 return 0;
 }

 void referansaGoreKup( int *nPtr )
 {
 *nPtr = *nPtr * *nPtr * *nPtr; /* main’deki sayi’nýn küpü alýndý */
}

