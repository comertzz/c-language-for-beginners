#include<stdio.h>
int katiMi(int sayi1, int sayi2){
	int sayi;
	if(sayi1%sayi2==0){
	
	printf("katidir");
	return 1;
}
	if(sayi1%sayi2!=0){
		printf("katidegil");
		return 0;
	}
}
int main(){

int sayi1,sayi2;
printf("sayi1 gir:\n");
scanf("%d",&sayi1);
printf("sayi2 gir:\n");
scanf("%d",&sayi2);
printf("%d",katiMi(sayi1,sayi2));
}
