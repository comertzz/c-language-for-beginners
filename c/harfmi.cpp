#include<stdio.h>
int harfmi(char c){

	if((c>='a' && c<='z')||(c>='A'&& c<='Z')){
			return 1;
				}
	else{
		return 0;
	}

}
int main(){
	char c;
	printf("karakter gir");
	scanf("%c",&c);
	printf("%d",harfmi(c));
}
