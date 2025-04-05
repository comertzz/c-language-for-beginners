#include<stdio.h>
int ekokbul(int sayi1,int sayi2){
	int ekok,i;
	for(i=1;i>=sayi1 && i>=sayi2;++i){
		if(i%sayi1==0 && i%sayi2==0){
			ekok=i;
		}
	}
}
int main(){
	int sayi1,sayi2;
	printf("sayi1 giriniz: \n");
	scanf("%d",&sayi1);
	printf("sayi2 giriniz: \n");
	scanf("%d",&sayi2);
	printf("iki sayinin ekoku: %d \n",ekokbul(sayi1,sayi2));
	
}
