#include<stdio.h>
#include<math.h>
int faktoriyel(int sayi){
	int fact=1;
	for(;sayi>0;sayi--){
		fact*=sayi;
	}
	return fact;
	
}

int main(){
	int sayi;
	printf("sayi giriniz:\n");
	scanf("%d",&sayi);
	printf("%d",faktoriyel(sayi));
	
}
