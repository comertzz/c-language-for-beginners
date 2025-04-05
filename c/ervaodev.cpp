#include<stdio.h>
#include<time.h>
#include<stdlib.h>


void cevap_anahtari_uret(char cevap_anahtari[], int S){


   srand(time(NULL));

   for(int i=0;i<S;i++)
    {
        cevap_anahtari[i]= 65+rand()%5;
    }
}


    void cevap_anahtari_yazdir(char cevap_anahtari[], int S)
   {
       for(int i=0;i<S;i++){
         printf(" |%.3d|  = %c ",i,cevap_anahtari[i]);
   }
        }



int main()
{
    int N,S;
    float B,D;
    char cevap_anahtari[S];


    printf("Ogrenci sayisini giriniz(max 100): ");
    scanf("%d", &N);
    printf("Soru sayisini giriniz(max 100): ");
    scanf("%d", &S);
    printf("Bos birakma ihtimalini giriniz(0.0 ~ 1.0): ");
    scanf("%f", &B);
    printf("Dogru cevap verme ihtimalini giriniz(0.0 ~ 1.0): ");
    scanf("%f \n", &D);


    cevap_anahtari_uret( cevap_anahtari, S);

    cevap_anahtari_yazdir(cevap_anahtari, S);
}
