# include <stdio.h>

 int main ( )
 {
 int n[40]={1,2,3,3,4,5,2,5,2,5,2,6,5,2,5,7,2,2,5,2,5,8,6,9,8,5,2,5,4,2,4,1,9,4,5,2,1,9,7,5} , i ;

 for (i=0;i<=40;i) /*diziye deðer ata*/
 n[i]=i;
 printf("%s%13s\n","Eleman","Deger");
 for(i=0;i<=40;i++){ /*diziyi yazdýr*/
 printf("%7d%13d\n",i,n[i]);
}
 return 0;

}
