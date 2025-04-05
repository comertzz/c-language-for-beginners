#include<stdio.h>
int main()
{
	int a= 5,*ap;
	float b=3.2,*bp;
	double c=3.14, *cp;
	char d='a',*cagirulandp;
	int sayilar[5]={1,2,3,4,6};
	int *arrayp;
	ap=&a;
	bp=&b;
	cp=&c;
	cagirulandp=&d;
	arrayp=&sayilar[1];
	printf("%u adresindeki intin degeri %d\n",ap,*ap);
	printf("%u adresindeki doublein degeri %f\n",bp,*bp); 
	printf("%u adresindeki floatin degeri %lf\n",cp,*cp); 
	printf("%u adresindeki charin degeri %c\n",cagirulandp,*cagirulandp); 
	printf("%u adresindeki sayilar elemaninin degeri %d\n",arrayp,*arrayp); 
}
