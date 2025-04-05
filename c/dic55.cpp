#include<stdio.h>
int main()
{
	int bosluksayisi,yildizsayisi;
	for(bosluksayisi=10;bosluksayisi>=0;bosluksayisi--){
		printf(" ");
		for(yildizsayisi=1;yildizsayisi<=bosluksayisi*2-1;yildizsayisi++){
			printf("*");
		}
		printf("\n");
}
}
