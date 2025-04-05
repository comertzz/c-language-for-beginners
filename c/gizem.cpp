#include<stdio.h>
	int gizem(unsigned bitler){
		unsigned i,maske=1<<31,toplam=0;
		for(i=1;i<=32;i++,bitler<<=1)
			if((bitler&maske)==maske)
			++toplam;
			return !(toplam%2)?1:0;
	}

int main(){
	unsigned x;
	printf("bir tamsayi giriniz:");
	scanf("%u",&x);
	printf("sonuc %d\n",gizem(x));
	return 0;
}

