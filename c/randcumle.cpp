#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	int i;
	char fiil[4];
	for(i=0;i<4;i++){
	fiil[i]='A'+rand()%'Z';
}
	for(i=0;i<4;i++){
		printf("%c",fiil[i]);

	}	
	printf(" ");
	char nesne[4];
	for(i=0;i<4;i++){
	nesne[i]='A'+rand()%'Z';
}
	for(i=0;i<4;i++){
		printf("%c",nesne[i]);

	}	
	printf(" ");
	char edat[4];
	for(i=0;i<4;i++){
	edat[i]='A'+rand()%'Z';
}
	for(i=0;i<4;i++){
		printf("%c",edat[i]);

	}	
	printf(" ");
	char isim[4];
	for(i=0;i<4;i++){
	isim[i]='A'+rand()%'Z';
}
	for(i=0;i<4;i++){
		printf("%c",isim[i]);
	printf(" ");
	}	
}
