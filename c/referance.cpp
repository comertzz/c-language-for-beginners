#include <stdio.h>

 void referansaGoreKup ( int * ); /* prototip */

 int main( )
 {
 int sayi = 5;

 printf( "Say�n�n esas de�eri %d", sayi);
 referansaGoreKup( &sayi);
 printf( "\nSay�n�n yeni de�eri %d\n", sayi);

 return 0;
 }

 void referansaGoreKup( int *nPtr )
 {
 *nPtr = *nPtr * *nPtr * *nPtr; /* main�deki sayi�n�n k�p� al�nd� */
}

