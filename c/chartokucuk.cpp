#include<stdio.h>
char toKucuk(char c){
	int fark= 'a'-'A';
	if(c>='A' && c<='Z'){
		c+=fark;
		return c;
	}
	else{
		return printf("harf degil.");
	}
}
int main(){
	char c;
	scanf("%c",&c);
	printf("%c",toKucuk(c));
}
