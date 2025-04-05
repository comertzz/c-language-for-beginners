#include<stdio.h>
int main(){
	int i,fakt=1,sayi;
	printf("faktoriyeli hesaplanacak sayiyi giriniz:\n",sayi);
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++){
	
			fakt*=i;
	}

	printf(" sonuc : %d",fakt);
	return 0;
}
