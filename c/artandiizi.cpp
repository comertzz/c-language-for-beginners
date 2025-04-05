#include<stdio.h>
#define BOYUT 10
void kabarcikSiralama(int*,const int);
int main()
{

	int a[BOYUT]={2,6,4,8,10,12,89,68,45,37};
	int i;
	printf("veriler orijinal sirada\n");
	for(i=0;i<BOYUT;i++){
		printf("%4d",a[i]);
		kabarcikSiralama(a,BOYUT);
		printf("veriler artan sirada\n");
		for(i=0;i<BOYUT;i++){
			printf("%4d",a[i]);
			
		}
		printf("\n");
		return 0;
	}
}
	void kabarcikSiralama(int*dizi,const int boyut)
	{
		void yerDegistir(int*,int*);
		int tur,j;
			for(tur=0;tur<boyut-1;tur++){
				for(j=0;j<boyut-1;j++){
					if(dizi[j]>dizi[j+1])
					yerDegistir(&dizi[j],&dizi[j+1]);
					else if(dizi[j]<dizi([j+1]))
					yerDegistir(&dizi[j],&dizi[j+1]);
				}
			}
	}
	void yerDegistir(int*eleman1Ptr,int*eleman2Ptr)
	{
		int temp=*eleman1Ptr;
		*eleman1Ptr=*eleman2Ptr;
		*eleman2Ptr=temp;
	}


