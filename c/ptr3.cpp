#include <stdio.h>

 int main( )
 {
 int x, y;

 int * const ptr = &x; /* ptr, tamsay. gosteren sabit bir gostericidir
 Bir tamsay. ptr ile de.i.tirilebilir
 ama ptr haf.zada
 her zaman ayn. yeri gosterir */
 *ptr = 7;
 ptr == &y;
 printf("%d",*(ptr+1));
}
