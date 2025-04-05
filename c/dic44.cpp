#include<stdio.h>
int kare(int a){
	int sonuc;
	sonuc=a*a;
	return sonuc;
}
int main()
{
	int a;
	printf("a sayisi giriniz");
	scanf("%d",&a);
	printf("%d",kare(a));
}
