#include<stdio.h>
int main()
{
	int vize;
	vizenott:
	printf("vize giriniz: \n");
	scanf("%d",&vize);
	
	
	if(vize<0 || vize>100){
		printf("gecersiz not:\n");
		goto vizenott;
	}
	else
	printf("vize notunuz %d",vize);
	
	}

