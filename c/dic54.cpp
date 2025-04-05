#include<stdio.h>
int asalMi(int a){
	int i;
	for(i=1;i<a;i++){
		if(a%i==0){
		return 0;
		}
	
	}
	return 1;

}
int main(){
	int a;
	printf("sayi gir");
	scanf("%d",&a);
	if(asalMi(a)==1){
	printf("asal sayi ");
}
	else
		printf("asal sayi degil");

}
