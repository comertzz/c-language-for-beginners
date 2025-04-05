#include<stdio.h>
struct Araba {
	int kapisayisi;
	int vitessayisi;
	int model;
	float motor;
	int beygir;
}hyundai,toyota;
int main(){
	hyundai={4,5,2009,1.4,97};
	toyota={4,10,2022,1.5,123};
	printf("%d %d %d %.2f %d\n",hyundai.beygir,hyundai.kapisayisi,hyundai.model,hyundai.motor,hyundai.motor,hyundai.beygir);
	printf("%d %d %d %.2f %d",toyota.beygir,toyota.kapisayisi,toyota.model,toyota.motor,toyota.vitessayisi);
}
