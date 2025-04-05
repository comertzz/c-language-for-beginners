#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main()
{
char a[200];
printf("Bir cumle giriniz\n");
gets(a);
int c=1,i;

for(i=0;a[i]!=NULL;i++)
if(c==1&&a[i]!=' ')
{
a[i]=toupper(a[i]);
c=0;
}
else if(a[i]==' ')
c=1;

printf("Cumlenin son hali:\n");
puts(a);

getch();
return 0;
}
