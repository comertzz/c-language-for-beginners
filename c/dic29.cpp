#include<stdio.h>
int main()
{
	int min,i,sayi,n;
	printf("kac sayi girincen");
	scanf("%d",&i);
	printf("sayi gir:");
	scanf("%d",&sayi);
	min=sayi;
	for(n=0;n<i-1;n++){
			if(min>sayi){
		sayi=min;
	}
		printf("sayi gir:");
		scanf("%d",&sayi);

	
	}
	printf("%d",min);
}
