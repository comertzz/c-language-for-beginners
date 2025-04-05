#include<stdio.h>
#include<math.h>
int main()
{
	double i,n,sayi;
	printf("us kaca kadar olsun:\n");
	scanf("%f",&n);
	printf("sayi kac olsun:\n");
	scanf("%f",&sayi);
	for(i=0;i<=n;i++)
	{
	printf("%.2f ",pow(sayi,i));
}
}
