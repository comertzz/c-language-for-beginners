#include<stdio.h>
int main(){
int bakiye=1000,islem,tutar;
printf("Islemler\n1=para cekme\n2=para yatirma\n3=havale\n4=bakiye sorgulama\n5=kart iade\n");
printf("islemi seciniz:");
scanf("%d",&islem);
switch(islem){
	case 1:
		printf("bakiyeniz %d\n",bakiye);
		printf("cekilecek tutari giriniz:");
		scanf("%d",&tutar);
		if(tutar>bakiye){
			printf("yetersiz bakiye");
		}
		bakiye-=tutar;
		printf("yeni bakiyeniz %d\n",bakiye);
		break;
    case 2:
    	printf("bakiyeniz %d\n",bakiye);
    	printf("yatirilacak tutari giriniz:");
    	scanf("%d",&tutar);
    	bakiye+=tutar;
    	printf("yeni bakiyeniz %d:",bakiye);
    	break;
    case 3:
    	printf("bakiyeniz %d\n",bakiye);
    	printf("havale yapilacak tutari giriniz:");
    	scanf("%d",&tutar);
    	if(tutar>bakiye){
    		printf("yetersiz bakiye");
		}
		bakiye-=tutar;
		printf("yeni bakiyeniz %d\n",bakiye);
		break;
	case 4:
		printf("bakiyeniz %d\n",bakiye);
		break;
    case 5: 
        printf("kartiniz iade edilmistir");
        break;
    default:
    	printf("bilinmeyen islem");
    	break;
		
}
	return 0;
}
