#include <stdio.h>
int main()
{
	int sayi,toplam=0,sayac=0;
	
	FILE *oku;

	oku=fopen("test3.txt","r");
	
	while(fscanf(oku,"%d",&sayi)==1)
	{
		printf("%d \t",sayi);
		toplam+=sayi;
		sayac++;
	}
	/* yöntem 2 
	while(!feof(oku))
	{
	fscanf(oku,"%d",&sayi);
	}
	*/
	printf("\nToplam :%d ve ort:%f",toplam,(double)toplam/sayac);
	
	fclose(oku);
}
