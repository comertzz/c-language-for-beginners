#include<stdio.h>
int ebobbul(int sayi1, int sayi2){
	int i,ebob;
	for(i=1;i<=sayi1 && i<=sayi2;++i){
		if(sayi1%i==0 && sayi2%i==0){
			ebob=i;
		}
	}
	return ebob;
}
int main(){
	int sayi1,sayi2;
	printf("sayi1 gir:\n");
	scanf("%d",&sayi1);
	printf("sayi2 gir:\n");
	scanf("%d",&sayi2);
	printf("iki sayinin ebobu %d",ebobbul(sayi1,sayi2));
	
}
