#include<stdio.h>
int main()
{
	int i,sayi,sum;
	printf("tek basamakli bi sayi girsne:\n");
	scanf("%d",&sayi);
	for(i=1;i<sayi;i+=i*10){
	sum=sayi*i+sayi;
}
		printf("%d",sum);

}
