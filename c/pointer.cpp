#include<stdio.h>
void referansaGoreKup(int*);
int main()
{
	int sayi=5;
	printf("sayinin degeri %d", sayi);
	referansaGoreKup(&sayi);
	printf("\n sayinin yeni degeri %d\n",sayi);
	return 0;
}
void referansaGoreKup(int*nPtr)
{
	*nPtr=*nPtr**nPtr**nPtr;
}
