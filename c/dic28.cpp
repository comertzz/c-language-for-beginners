#include<stdio.h>
#include<conio.h>

 int main(){

 float x, sayac=0, toplam=0;
 float ortalama;

 printf("Ortalamasini almak istediginiz sayilari girin(Cikmak icin 9999 giriniz!):\n");
 scanf("%f", &x);

 while(x!=9999){
    toplam+=x;
    scanf("%f", &x);
    sayac++;
 }
  ortalama = toplam / sayac;
  printf("\nGirilen sayilarin ortalamasi: %.3f", ortalama);


return 0;
}
