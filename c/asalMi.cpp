#include<stdio.h>
int asalMi(int sayi) {
	int i;
	for(i=1;i<sayi;i++){
		if(sayi % i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int sayi;
	printf("sayi giriniz:\n");
	scanf("%d",&sayi);
	if(asalMi(sayi)==1){
		printf("bu sayi asaldir\n");
	}
	else
	printf("bu sayi asal sayi degildir\n");
}
