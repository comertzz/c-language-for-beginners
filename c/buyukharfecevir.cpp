#include<stdio.h>
#include<ctype.h>
void buyukHarfeCevir(char*);
int main()
{
	char string[]="melih yildiz";
	printf("cevrilmeden onceki string : %s",string);
	buyukHarfeCevir(string);
	printf("\nCevrildikten sonraki string: %s",string);
	return 0;
	
}
void buyukHarfeCevir(char *sPtr)
{
	while(*sPtr!='\0'){
		if(islower(*sPtr))
			*sPtr=toupper(*sPtr);
			++sPtr;
	}
}
