# include <stdio.h>
#define BOYUT 10

 int main ( )
 {
 int s[BOYUT], j , toplam=0;

 for (j=1 ; j <= BOYUT - 1; j++) /*Deðerleri hesapla*/
 s[j] =  9 * j ;

 printf (" %8s %12s \n","Eleman","Deger");

 for (j = 1; j <= BOYUT - 1 ; j++)
 toplam += s[j]; /*Deðerleri yazdýr*/
 printf ("dizideki sayilarin toplami %d", toplam );
 

 return 0;
 }
