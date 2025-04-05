#include<stdio.h>
int main()
{
	int yol;
	float benzin;
	float oran;
	printf("kac km yol yaptin:");
	scanf("%d",&yol);
	printf("kac litre benzin harcandi:");
	scanf("%f",&benzin);
	if(benzin==(-2)){
		printf("cikis yaptiniz.");
	}
	
	else {
		oran=yol/benzin;
	printf("yol bolu benzin %f",oran);
}
}
