#include <stdio.h>
int main()
{
	FILE *yaz;
	yaz=fopen("test.txt","w");
	if(yaz==NULL)
		printf("Dosya bulunmad�");
	else
	{
	    int sayi;
	    scanf("%d",&sayi);
		fprintf(yaz,"%d",sayi);
		fprintf(yaz,"%c",'\n');
		fprintf(yaz,"%d",29);
		fprintf(yaz,"%c",'\n');
		fprintf(yaz,"%f",25.45);
		fprintf(yaz,"\nve string ekleyelim �a�r�ya..#$�\n");
	}
	fclose(yaz);
	
	FILE *oku;
	oku=fopen("test.txt","r");
	char c;
	while((c=getc(oku))!=EOF)
		printf("%c",c);
	fclose(oku);
}
