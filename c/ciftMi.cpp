#include<stdio.h>
int ciftMi(int sayi){
	if(sayi%2==0){
	
	return 1;
}
	else{
	
	return 0;
}
}	
int main(){
	int sayi;
	printf("sayiyi gir:\n");
	scanf("%d",&sayi);
	printf("%d",ciftMi(sayi));
}

