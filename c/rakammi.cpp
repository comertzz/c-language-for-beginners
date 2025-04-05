#include<stdio.h>
int rakammi(int a){
if(a<=10 && a>=0){
	return 1;
}
else{
	return 0;
}
}
int main(){
	int a;
	printf("sayi giriniz");
	scanf("%d",&a);
	printf("%d",rakammi(a));
}
