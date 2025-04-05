#include<stdio.h>
int main(){
	int a,b,c;
	printf("ucgenin kenarlarini sirayla gir:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c){
		printf("eskenar ucgen\n");
	}
	else if(a==b || (b==c) || (a==c) ){
		printf("ikizkenar ucgen\n");
	}
	else if((a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) ||  (a*a)+(c*c)==(b*b)){
		printf("dik ucgen\n");
	}
	}
