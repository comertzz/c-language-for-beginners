#include<stdio.h>
double alan(int r){
	double alani;
alani=3.14*r*r;
return alani;
}
double cevre(int r){
	double cevresi;
cevresi=2*3.14*r;
return cevresi;
}
int main()
{
	int r;
	printf("yaricap gir:\n");
	scanf("%d",&r);
	printf("cevresi= %f\n",cevre(r));
	printf("alani=%f",alan(r));
	return 0;
}
