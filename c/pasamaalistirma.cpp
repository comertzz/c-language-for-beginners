#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int sonuc,i,a,b,n,dogru=0,yanlis=0,sorusayisi=0;
	srand(time(NULL));
	printf("hangi islemi yapmak istiyon\n1=toplama\n2=cikarma\n3=carpma\n4=bolme\n");
	scanf("%d",&i);
	a=1+rand()%10;
	b=1+rand()%10;
	for(n=0;n<=10;n++){
	switch(i){
		case 1: printf("%d+%d=",a,b);
		scanf("%d",&sonuc);
		if(sonuc==a+b){
			printf("dogru cevap.\n");
			dogru++;
			sorusayisi++;
			a=1+rand()%10;
			b=1+rand()%10;
		}
		else if(sonuc!=a+b){
			printf("yanlis cevap.\n");
			yanlis++;
			sorusayisi++;
			a=1+rand()%10;
			b=1+rand()%10;
		}
		break;
		case 2: printf("%d-%d=",a,b);
		scanf("%d",&sonuc);
		if(sonuc==a-b){
			printf("dogru cevap.\n");
			dogru++;
			sorusayisi++;
			a=1+rand()%10;
			b=1+rand()%10;
		}
		else if(sonuc!=a-b){
			printf("yanlis cevap.");
			yanlis++;
			sorusayisi++;
			a=1+rand()%10;
			b=1+rand()%10;
		}
		break;
		case 3: printf("%d kere %d=",a,b);
		scanf("%d",&sonuc);
		if(sonuc==a*b){
			printf("dogru cevap.\n");
			dogru++;
			sorusayisi++;
			a=1+rand()%10;
			b=1+rand()%10;
		}
		else if(sonuc!=a*b){
			printf("yanlis cevap.");
			yanlis++;
			sorusayisi++;
			a=1+rand()%10;
			b=1+rand()%10;
		}
		break;
		case 4: printf("%d bolu %d=",a,b);
		scanf("%d",&sonuc);
		if(sonuc==a/b){
			printf("dogru cevap.\n");
			dogru++;
			sorusayisi++;
			a=1+rand()%10;
			b=1+rand()%10;
		}
		else if(sonuc!=a/b){
			printf("yanlis cevap.");
			yanlis++;
			sorusayisi++;
			a=1+rand()%10;
			b=1+rand()%10;
		}
		break;
		default:printf("ne yapmaya calisiyon\n");
		
	}
	printf("dogru sayisi %d\nyanlis sayisi %d\n",dogru,yanlis);
	if(dogru<7 && sorusayisi==10){
		printf("\nogretmeninden yardim al\n");
	}
}
}
