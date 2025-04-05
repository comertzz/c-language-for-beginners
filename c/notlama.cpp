#include<stdio.h>
int notlama(int){
	int nott;
	if(nott<=100 && nott>=90){
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
		
	if(nott<60 && nott>=1){
		return 0;
	}
	
}
int main(){
	int nott;
	printf("notu giriniz:\n");
	scanf("%d",&nott);
	printf("%d",notlama(nott));
}
