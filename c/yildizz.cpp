#include <stdio.h>
 #define BOYUT 10

 int main( )
 {
 int n[ BOYUT ] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
 int i, j;

 printf( "%s%13s%17s\n", "Eleman", "DeGer", "Grafik" );

 for ( i = 0; i <= BOYUT - 1; i++ ) {
 printf( "%7d%13d ", i, n[ i ]) ;

 for ( j = 1; j <= n[ i ]; j++ )
 printf( "%c", '*' );

 printf( "\n" );
 }

 return 0;
 }
