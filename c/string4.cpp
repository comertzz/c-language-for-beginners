#include<stdio.h>
#include<ctype.h>
int main(){
	printf("%s\n%s\n%s\n\n","isdigit icin:",isdigit('8')?"8 bir rakamdır":"8 bir rakam degildir",isdigit('#')? "# bir rakamdir":"# bir rakamdegildir.");
	printf("%s\n%s\n%s\n%s\n%s\n\n","isalpha icin:",isalpha('A')?"A bir harftir":"A bir harf degildir",isalpha('b')?"b bir harftir":"b bir harf degildir",isalpha('&')?"& bir harftir":"& bir harf değildir",isalpha('4')?"4 bir harftir":"4 bir harf değildir");
	printf("%s\n%s\n%s\n%s\n\n","is alnum icin:",isalnum('A')?"A bir rakam ya da harftir":"A bir rakam ya da harf değildir",isalnum('8')?"8 bir rakam ya da harftir":"8 bir rakam ya da harf degildir",isalnum('#')?"# bir harf ya da rakamdır":"# bir harf ya da rakam degildir");
	printf("%s\n%s\n%s\n%s\n","isxdigit icin:",isxdigit('F')?"F bir heksadesimal rakamdır":"F bir heksadesimal rakam degildir",isxdigit('J')?"j bir heksadesimal rakamdır":"j bir heksadesimal rakam degildir.",isxdigit('7')?"7 bir heksadesimal rakamdır":"7 bir heksadesimal rakam degildir",isxdigit('$')?"$ bir heksadesimal rakamdır":"$ bir heksadesimal rakam degildir");
	return 0;
}
