#include<stdio.h>
int main(){
	char isim[20];
	char soyisim[20];
	int yas;
	float boy;
	FILE *yaz;
	
	yaz=fopen("test.txt","w");
	if(yaz==NULL)
		printf("dosya bulunamad");
		else{
			fprintf(yaz,"isim:");
			scanf("%s",isim);
			fprintf(yaz,"%s\n",isim);
			fprintf(yaz,"soyisim:");
			scanf("%s",soyisim);
			fprintf(yaz,"%s\n",soyisim);
			fprintf(yaz,"yas:");
			scanf("%d",&yas);
			fprintf(yaz,"%d\n",yas);
			fprintf(yaz,"boy:");
			scanf("%f",&boy);
			fprintf(yaz,"%.2f",boy);
		}
		fclose(yaz);
		FILE *oku;
		oku=fopen("test.txt","r");
		char c;
		while((c=getc(oku))!=EOF)
			printf("%c",c);
		fclose(oku);
	
}
