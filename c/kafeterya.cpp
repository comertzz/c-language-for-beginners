	#include<stdio.h>
 int main ( )
 {
 int n[40] , i ;

for (i=0;i<=9;i++) /*diziye de�er ata*/
 n[i]=i++;
 printf("%s%13s\n","Eleman","Deger");
 for(i=0;i<=10;i++){ /*diziyi yazd�r*/
 printf("%7d%13d\n",i,n[i]);
}
 return 0;

}
