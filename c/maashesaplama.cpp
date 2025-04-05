#include<stdio.h>
int main(){
int maas1,maas2,maas3,saat1,saat2,saat3;
printf("Calisan 1 in kac saat calistigini giriniz:\n");
scanf("%d",&saat1);
printf("Calisan 2 nin kac saat calistigini giriniz:\n");
scanf("%d",&saat2);
printf("Calisan 3 un kac saat calistigini giriniz:\n");
scanf("%d",&saat3);
maas1=saat1*10;
maas2=saat2*10;
maas3=saat3*10;
if(saat1<40 && saat3>40){
maas2+=(saat2-40)*10/2;
maas3+=(saat3-40)*10/2;
}
printf("Calisan 1 in maasi: %d\n",maas1);
printf("Calisan 2 nin maasi: %d\n",maas2);
printf("Calisan 3 un maasi: %d\n",maas3);
 return 0;
}

