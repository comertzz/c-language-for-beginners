#include <stdio.h>
int whitespace(char ch){
if (ch == ' ' ||   /* ch is a blank space or */

         ch == '\t' ||  /* a horizontal tab or */

         ch =='\n' ||  /* a new line or */

         ch == '\r' ||  /* a carriage return or */

         ch == '\f' ||  /* a form feed or */

         ch== '\v') /* a vertical tab */

         return 1;

         else
		 return 0;

}
int main()

{

     char ch;


        printf("Enter the Character");

        scanf("%c",&ch);
        printf("%d",whitespace(ch));

     
         

}
