#include<stdio.h>
#include<stdlib.h>
int main(){
	int	sayi[10];
	int i;
	int x;
	int karakter=0;
	for(i=0;i<10;i++){
		x=rand()%1000+1;
		sayi[i]=x;
		printf("%d\n",karakter);
		karakter++;
		printf("%d\n",sayi[i]);
		
	}


	
	
	
}
