#include<stdio.h>
#include<string.h>
int main(){
	char a[]="co";
	if(strchr(a,'c')){
		printf("kelime uyusuyor harf olarak");
	}
	else{
		printf("uyusmuyorr");
	}
}
