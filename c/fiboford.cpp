 #include<stdio.h>
 int main(){
 
 
 int ilkSayi=0;
    int ikinciSayi=1;
    int toplam=0;
    int sayi;

    printf("%d\t",ilkSayi);
    printf("%d\t",ikinciSayi);

    for(int i=0; i<sayi-2; i++)
    {
        toplam=ilkSayi+ikinciSayi;
        ilkSayi=ikinciSayi;
        ikinciSayi=toplam;
        printf("%d\t",toplam);

}
}
