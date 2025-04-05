#include<stdio.h>
#include<string.h>
int main(){
	char a[]="comert";
	char b[1];
	while(1){
	scanf("%c",&b[1]);
	if(strchr(a,b[1])==1){
	printf("kelime uyusuyor harf olarak\n");
	}
	else{
		printf("uyusmuyorr");
	}
}
}
