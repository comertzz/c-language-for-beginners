#include<stdio.h>
int siniflandir(int nott){
	if(nott>=90 && nott<=100 ){
		return 4;
	}
	if(nott>=80 && nott<=89){
		return 3;
	}
	if(nott>=70 && nott<=79){
		return 2;
	}
	if(nott>=60 && nott<=69){
		return 1;
	}
	if(nott<=59 && nott>=0){
		return 0;
	}
}
int main(){
	int nott;
	printf("not ort gir.");
	scanf("%d",&nott);
	printf("sonuc %d",siniflandir(nott));
}
