#include <stdio.h>
 #define CEVAP_BOYUTU 10

 int main( )
 {
int yildizz;
 int cevaplar[ CEVAP_BOYUTU ] =
 { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10 };

 for(yildizz= 0;yildizz<=CEVAP_BOYUTU -1;yildizz ++ )
 ++frekans[ cevaplar [ogrenciCevabi ] ];

 printf( "%s%17s\n", "Oylama", "Frekans" );

 for ( oylama = 1; oylama<= FREKANS_BOYUTU - 1; oylama++ )
 printf( "%6d%17d\n", oylama, frekans[ oylama] );

 return 0;
 }
