#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int alistirma(int sayi1,int sayi2){
	int i,adet,sonuc;
	srand(time(NULL));
	int a=rand()%10;
	int b=rand()%10;
	printf("%d kere %d kactir\n",a,b);
	printf("sonuc %d\n",a*b);
	if(sonuc==a*b){
		printf("tebrikler canim\n");
}

	
	
	
	
	

}

 

int main(){
	int sayi1,sayi2;
	printf(" ",alistirma(sayi1,sayi2));
}
