#include<stdio.h>
float dereceyecevirme(float fahrenheit){

float derece;
derece=(fahrenheit-32)/1.8;
return derece;
}
int main()
{
	float fahrenheit;
	printf("sicakligi fahrenheit cinsinden giriniz:\n");
	scanf("%f",&fahrenheit);
	printf("sicaklik %f derece",dereceyecevirme(fahrenheit));
}

