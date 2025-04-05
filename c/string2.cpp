#include<stdio.h>
int uzunlukdon(char name[]){
	int uzunluk=0;
	int i;
	for(i=0;name[i]!='\0';i++){
		uzunluk++;
	}
	return uzunluk;
}
int main(){
	char isim[]="como";
	printf("%d",uzunlukdon(isim));
}
