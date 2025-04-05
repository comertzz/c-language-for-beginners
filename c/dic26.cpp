#include<stdio.h>
int main()
 {
 	int n,i,sayi,toplam;
 	printf("kac sayi girilcegini sec:");
 	scanf("%d",&i);
 	printf("\n%d sayi girilicek.",i);
 	for(n=0;n<i;n++){
 		printf("sayi giriniz:");
 		scanf("%d",&sayi);
 		toplam+=sayi;
		}
		printf("%d",toplam--);
		
 }
