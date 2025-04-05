#include<stdio.h>
int mukemmel(int a){
	int i,toplam=0;
	for(i=1;i<a;i++){
		if(a%i==0){
			toplam+=i;
			if(toplam==a){
				printf("mukemmel sayi");
			}
		}
	}
	return 0;
}
int main(){
	int a;
	printf("sayi gir");
	scanf("%d",&a);
	printf(" ",mukemmel(a));
}
