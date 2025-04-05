#include<stdio.h>
int fakt(int sayi){
	int i,fact;
	for(i=sayi;i>1;i--){
	fact*=i;
	}
	return fact;
}
int main()
{
	int sayi;
	printf("sayi gir\n");
	scanf("%d",&sayi);
	printf("%d",fakt(sayi));
}
