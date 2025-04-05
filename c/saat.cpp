#include<stdio.h>
#include<math.h>
int main()
{
	int kalan,saat,dakika,saniye;
	printf("saat dakika saniye sirayla giriniz:\n");
	scanf("%d%d%d",&saat,&dakika,&saniye);
	kalan=(12*60*60)-(saat*60*60)+(dakika*60)+(saniye);
	printf("kalan %d\n",kalan);
	
	
}
