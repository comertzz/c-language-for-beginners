#include<stdio.h>
int main(){
	char isim[20];
	char soyisim[20];
	int vize;
	int final;
	FILE *yaz;
	
	yaz=fopen("test2.txt","w");
	if(yaz==NULL)
		printf("dosya bulunamad");
		else{
			for(int i=0;i<3;i++){
			fprintf(yaz,"isim:");
			scanf("%s",isim);
			fprintf(yaz,"%s\n",isim);
			fprintf(yaz,"soyisim:");
			scanf("%s",soyisim);
			fprintf(yaz,"%s\n",soyisim);
			fprintf(yaz,"vize:");
			scanf("%d",&vize);
			fprintf(yaz,"%d\n",vize);
			fprintf(yaz,"final:");
			scanf("%d",&final);
			fprintf(yaz,"%d\n",final);
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
