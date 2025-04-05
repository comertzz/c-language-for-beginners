#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void cevap_anahtari_uret(char cevap_anahtari[ ],int S){

    srand(time(NULL));
    for(int i=0; i<=S; i++){
        cevap_anahtari[i]=65+rand()%5; //cevap anahtarini bir char dizisi olarak tanimladik ve ASCII kodlarini kullanarak A-B-C-D-E harflerinden rastgele bir cevap anahtari olusturduk
    }
}

    void cevap_anahtari_yazdir(char cevap_anahtari[ ],int S){

       for(int i=1; i<=S; i++){
         printf(" %.3d:%c |",i,cevap_anahtari[i]);
   }
   printf("\n");
        }

    void sinavi_uygula(char ogrenci_cevaplari[ ][100], char cevap_anahtari[ ], int N, int S, double B,double D){
        B=B*100; //boþ býrakma ihtimalinin yüzdesi
        D=D*100; //doðru yapma ihtimalinin yüzdesi
        int i,j,rastgelesayi;
        char rastgeleharf;

    srand(time(NULL));

    for(j=0; j<=N; j++){
           for(i=0; i<=S; i++){
            rastgelesayi=rand()%100;

        if(rastgelesayi<=B)
            ogrenci_cevaplari[j][i]='X'; //rastgele sayimiz bos yüzdesinden kucukse soru bos birakilmiþ oluyor bu nedenle ogrencinin cevabýna 'X' yazdirdik

        else if(rastgelesayi>B && rastgelesayi<D)
            ogrenci_cevaplari[j][i]=cevap_anahtari[i]; //rastgele sayimiz bos yuzdesinden buyuk ve dogru yuzdesinden kucukse soru dogru olmus oluyor bu nedenle ogrenci cevabina cevap anahtarindaki degeri yazdirdik

        else{
            rastgeleharf=65+rand()%5;
            ogrenci_cevaplari[j][i]=rastgeleharf; //yukarýdaki her iki ihtimal de olmazsa ogrenci cevabina rastgele bir deger yazdiririz
        }

           }
    }
}

void ogrenci_cevabini_yazdir(char ogrenci_cevaplari[ ][100],int ogrenci_ID,int S){

 // hocam F'nin sirtina N sayisini yukledim bu sayede sizin verdiginiz fonksiyonda degisiklik yapmadan hallettim. :)
int F;
F=ogrenci_ID;
ogrenci_ID=0;

    for(int ogrenci_ID=1; ogrenci_ID<=F; ogrenci_ID++){  //ilk for dongümüz kacinci ogrenci oldugunu takip ediyor
        printf(" %.3d. ogrencinin cevaplari: \n",ogrenci_ID);
        for(int e=1 ;e<=S ; e++){  //ikinci for dongümüz ogrenci cevaplarini kontrol ediyor
         printf(" %.3d:%c | ",e,ogrenci_cevaplari[ogrenci_ID][e]);

        }
        printf("\n");
    }
}

void ogrencileri_puanla(char ogrenci_cevaplari[ ][100], char cevap_anahtari[ ], double HBN[ ],int N, int S){

    float dogru_soru_sayisi=0,yanlis_soru_sayisi=0,bos_soru_sayisi=0,ham_dogru_sayisi;


    for(int i=0; i<=N; i++){
            dogru_soru_sayisi=0;
            yanlis_soru_sayisi=0;

        for(int j=0; j<=S; j++){
            if(ogrenci_cevaplari[i][j]==cevap_anahtari[j])
                dogru_soru_sayisi+=1;

        else if((ogrenci_cevaplari[i][j]!= cevap_anahtari[j]) && (ogrenci_cevaplari[i][j]!='X'))
            yanlis_soru_sayisi+=1;

        ham_dogru_sayisi=dogru_soru_sayisi-(yanlis_soru_sayisi/4);
        HBN[i]=(ham_dogru_sayisi*100)/S;
        if(HBN[i]<=0)
            HBN[i]=0;
        }

    }
}

double sinif_ortalamasi_hesapla(double HBN[ ],int N){

    double ortalama=0.0, toplam=0.0;

    for(int i=0; i<N; i++)
       toplam=toplam+HBN[i];

    return toplam/N;

}

double standart_sapma_hesapla(double ortalama, double HBN[],int N){

    double toplam=0.0,std;
    for(int i=0; i<N; i++)
       std=sqrt((toplam+=pow( HBN[i]-ortalama,2 )/N));

       return std;
}

void T_skoru_hesapla(double ortalama,double HBN[],int N,double std,double T_skoru[]){

    for(int i=0; i<N; i++)
        T_skoru[i]=60+10*(( HBN[i] - ortalama)/std);
}

int main()
{
    int N,S,ogrenci_ID;
    float B,D;
    char cevap_anahtari[100],ogrenci_cevaplari[N][S],sinif_duzeyi;
    double HBN[N],ortalama,std,T_skoru[N],toplam=0.0;

    printf("Ogrenci sayisini giriniz(max 100): ");
    scanf("%d", &N);
    printf("Soru sayisini giriniz(max 100): ");
    scanf("%d", &S);
    printf("Bos birakma ihtimalini giriniz(0.0 ~ 1.0): ");
    scanf("%f", &B);
    printf("Dogru cevap verme ihtimalini giriniz(0.0 ~ 1.0): ");
    scanf("%f", &D);

    printf("\nCEVAP ANAHTARI:\n");

    cevap_anahtari_uret(cevap_anahtari, S);

    cevap_anahtari_yazdir(cevap_anahtari, S);

    sinavi_uygula(ogrenci_cevaplari, cevap_anahtari, N, S, B, D);
    ogrenci_ID=N;

    ogrenci_cevabini_yazdir(ogrenci_cevaplari, ogrenci_ID, S);

    ogrencileri_puanla(ogrenci_cevaplari, cevap_anahtari, HBN, N, S);

    sinif_ortalamasi_hesapla(HBN, N);

    T_skoru_hesapla(ortalama, HBN, N, std, T_skoru);


    printf("sinif ortalamasi: %lf, ",toplam/N);
    printf("standart sapma: %lf \n",std);

    if(ortalama>80 && ortalama<=100)
                printf("sinif duzeyi: ustun basari ");
        else if(ortalama>70 && ortalama<=80)
                printf("sinif duzeyi: mukemmel");
        else if(ortalama>62.5 && ortalama<=70)
                printf("sinif duzeyi: cok iyi");
        else if(ortalama>57.5 && ortalama<=62.5)
                printf("sinif duzeyi: iyi");
        else if(ortalama>52.5 && ortalama<=57.5)
                printf("sinif duzeyi: ortanin ustu");
        else if(ortalama>47.5 && ortalama<=52.5)
                printf("sinif duzeyi: orta");
        else if(ortalama>42.5 && ortalama<=47.5)
                printf("sinif duzeyi: zayif");
        else
                printf("sinif duzeyi: kotu");

     printf("OGRENCÝ NOTLARÝ: \n");


     for(int j=0; j<N; j++){

     if(ortalama>80 && ortalama<=100){
        if(T_skoru[j]<32)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FF\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>32 && T_skoru[j]<=36.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>37 && T_skoru[j]<=41.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>42 && T_skoru[j]<=46.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>47 && T_skoru[j]<=51.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>52 && T_skoru[j]<=56.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>57 && T_skoru[j]<=61.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>62 && T_skoru[j]<=66.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BA\n",j+1,HBN[j],T_skoru[j]);
        else
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: AA\n",j+1,HBN[j],T_skoru[j]);
     }


     if(ortalama>70 && ortalama<=80){
        if(T_skoru[j]<34)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FF\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>34 && T_skoru[j]<=38.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>39 && T_skoru[j]<=43.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>44 && T_skoru[j]<=48.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>49 && T_skoru[j]<=53.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>54 && T_skoru[j]<=58.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>59 && T_skoru[j]<=63.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>64 && T_skoru[j]<=68.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BA\n",j+1,HBN[j],T_skoru[j]);
        else
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: AA\n",j+1,HBN[j],T_skoru[j]);
     }


      if(ortalama>62.5 && ortalama<=70){
        if(T_skoru[j]<36)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FF\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>36 && T_skoru[j]<=40.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>41 && T_skoru[j]<=45.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>46 && T_skoru[j]<=50.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>51 && T_skoru[j]<=55.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>56 && T_skoru[j]<=60.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>61 && T_skoru[j]<=65.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>66 && T_skoru[j]<=70.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BA\n",j+1,HBN[j],T_skoru[j]);
        else
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: AA\n",j+1,HBN[j],T_skoru[j]);
     }


      if(ortalama>57.5 && ortalama<=62.5){
        if(T_skoru[j]<38)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FF\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>38 && T_skoru[j]<=42.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>43 && T_skoru[j]<=47.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>48 && T_skoru[j]<=52.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>53 && T_skoru[j]<=57.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>58 && T_skoru[j]<=62.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>63 && T_skoru[j]<=67.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>68 && T_skoru[j]<=72.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BA\n",j+1,HBN[j],T_skoru[j]);
        else
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: AA\n",j+1,HBN[j],T_skoru[j]);
     }


      if(ortalama>52.5 && ortalama<=57.5){
        if(T_skoru[j]<40)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FF\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>40 && T_skoru[j]<=44.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>45 && T_skoru[j]<=49.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>50 && T_skoru[j]<=54.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>55 && T_skoru[j]<=59.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>60 && T_skoru[j]<=64.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>65 && T_skoru[j]<=69.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>70 && T_skoru[j]<=74.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BA\n",j+1,HBN[j],T_skoru[j]);
        else
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: AA\n",j+1,HBN[j],T_skoru[j]);
     }


      if(ortalama>47.5 && ortalama<=52.5){
        if(T_skoru[j]<42)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FF\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>42 && T_skoru[j]<=46.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>47 && T_skoru[j]<=51.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>52 && T_skoru[j]<=56.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>57 && T_skoru[j]<=61.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>62 && T_skoru[j]<=66.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>67 && T_skoru[j]<=71.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>72 && T_skoru[j]<=76.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BA\n",j+1,HBN[j],T_skoru[j]);
        else
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: AA\n",j+1,HBN[j],T_skoru[j]);
     }


      if(ortalama>42.5 && ortalama<=47.5){
        if(T_skoru[j]<44)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FF\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>44 && T_skoru[j]<=48.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>49 && T_skoru[j]<=53.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>54 && T_skoru[j]<=58.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>59 && T_skoru[j]<=63.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>64 && T_skoru[j]<=68.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>69 && T_skoru[j]<=73.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>74 && T_skoru[j]<=78.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BA\n",j+1,HBN[j],T_skoru[j]);
        else
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: AA\n",j+1,HBN[j],T_skoru[j]);
     }


      if(ortalama<=42.5){
        if(T_skoru[j]<46)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FF\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>46 && T_skoru[j]<=50.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: FD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>51 && T_skoru[j]<=55.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DD\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>56 && T_skoru[j]<=60.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: DC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>61 && T_skoru[j]<=65.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CC\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>66 && T_skoru[j]<=70.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: CB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>71 && T_skoru[j]<=75.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BB\n",j+1,HBN[j],T_skoru[j]);
        else if(T_skoru[j]>76 && T_skoru[j]<=80.99)
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: BA\n",j+1,HBN[j],T_skoru[j]);
        else
            printf("%.3d. ogrencinin HBN: %.2lf, T_skoru: %.2lf, harf notu: AA\n",j+1,HBN[j],T_skoru[j]);
     }


     }
}
