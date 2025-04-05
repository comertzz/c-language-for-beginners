#include<stdio.h>
float cevresi(float r){
float cevre=3.14*2*r;
return cevre;
}
float alani(float r){
float alan=3.14*r*r;
return alan;
}
int main()
{
	float r;
	printf("yaricapi gir:\n");
	scanf("%f",&r);
	printf("cevresi:%f",cevresi(r));
	printf("alani:%f",alani(r));
}
