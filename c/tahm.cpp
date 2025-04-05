#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,deneme=0;
	
	srand(time(NULL));
	int tahmin=rand()%100;
	printf("0 ile 100 arasinda bir sayi tahmin ettimmm \n");


	
	do{
	printf("tahminini gir bakalim:\n");
	scanf("%d",&i);
	
	
	if(i<tahmin){
		printf("birazcik buyult\n");
	}
	else if(i>tahmin){
		printf("yavas kucult\n");
	}
	deneme++;
	}
	while(i!=tahmin);
	printf("tebrikler %d. denemede buldun \n",deneme);

}
