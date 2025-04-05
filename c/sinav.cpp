#include <stdio.h>

 int main( )
 {
 char cumle[ 80 ];
 void ters( const char * const );

 printf( "Metin giri.i yap.n.z:\n" );
 gets( cumle );


 printf( "\nGirdi.iniz metin tersten yaz.ld...nda:\n" );
 ters( cumle);

 return 0;
 }
 void ters( const char * const sPtr )
 {
 if ( sPtr[ 0 ] == '\0' )
 return;
 else {
 ters( &sPtr[ 1 ] );
 putchar( sPtr[ 0 ] );
 }
 }
