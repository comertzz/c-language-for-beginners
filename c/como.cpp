#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *dosya;
	char karakter1[50]="como";
	char karakter2[50]="muhammet";
	dosya=fopen("como2.txt","w");
	fputs(karakter1,dosya);
	fputs(karakter2,dosya);
	
	fclose(dosya);

	fclose(dosya);
}
