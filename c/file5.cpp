#include <stdio.h>
int main()
{
	int mevcut=3;
	FILE *yaz;
	yaz=fopen("test2.txt","w");
	char isim[20];
	int vize,final;
	double ort;
	if(yaz==NULL)
		printf("Dosya bulunmad�");
	else
	{
		for(int i=0;i<mevcut;i++)
		{
			printf("Sirasiyla ad , vize ve final giriniz: ");
			scanf("%s",isim);
			fprintf(yaz,"%s\t",isim);
			scanf("%d",&vize);
			fprintf(yaz,"%d\t",vize);
			scanf("%d",&final);
			fprintf(yaz,"%d\t",final);
			ort=vize*0.4+final*0.6;
			fprintf(yaz,"%f\n",ort);
		}
	}
	fclose(yaz);
	
	FILE *oku;

	oku=fopen("test2.txt","r");
	char c;
	while((c=getc(oku))!=EOF)
		printf("%c",c);
	
	fclose(oku);
}

