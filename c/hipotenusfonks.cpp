#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double hipohesapla(double kenar1,double kenar2){
	double hipotenus;
	hipotenus==sqrt(pow(kenar1,2)+pow(kenar2,2));
	return hipotenus;
	
}
int main(){
	double kenar1,kenar2,hipotenus;
	printf("kenar1,kenar2 giriniz:\n");
	scanf("%f%f",&kenar1,&kenar2);
	hipohesapla(kenar1,kenar2);
	printf("hipotenus %f",hipotenus);
}
