#include<stdio.h>
#include<stdbool.h>
bool isRakam(char c){
	if(c>47 && c<58){
		return 1;
	}
	else{
		return 0;
			}
}
int main(){
	char c;
	scanf("%c",&c);
	printf("%d",isRakam(c));
	
}
