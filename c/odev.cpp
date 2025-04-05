#include<stdio.h>
int main()
{
	int max,toplam,i,n,sayi,min;
	float ort;
	printf("kac sayi gireceksin:\n");
	scanf("%d",&n);
	sayi+=2;
	for(i=0;i<n;i++){
		printf("sayi gir:\n");
		scanf("%d",&sayi);
		toplam+=sayi;
		ort=toplam/n;
		if(sayi>max) max=sayi;
		if(sayi<min) min=sayi;	
		}
	
	printf("toplam %d\n",toplam);
	printf("ort %.2f\n",ort);
	printf("eb %d\n",max);
	printf("ek %d",min);
}
