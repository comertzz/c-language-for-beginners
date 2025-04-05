#include<stdio.h>
#include<stdbool.h>
bool isHarf(char c){
	if(c>=65 && c<=90 || c>=97 && c<=122 ){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	char c;
	scanf("%c",&c);
	printf("%d",isHarf(c));
}
