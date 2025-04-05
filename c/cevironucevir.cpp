#include<stdio.h>
int cevironucevir(int sayi){
	int i;
	while(sayi>0){
	
		printf("%d",sayi%10);
		sayi=sayi/10;
	}
	return sayi;
}
int main(){
	int sayi;
	printf("sayi  gir:\n");
	scanf("%d",&sayi);
	printf("sayinin tersten okunusu:\n",cevironucevir(sayi));
}
