#include<stdio.h>
int main(){
	int kenar1,kenar2,hipotenus;
	for(hipotenus=1;hipotenus<=10;hipotenus++){
	
    for(kenar1=1;kenar1<=10;kenar1++){
    	hipotenus=kenar1*kenar1+kenar2*kenar2;
    	for(kenar2=1;kenar2<=10;kenar2++){
    		hipotenus=kenar1*kenar1+kenar2*kenar2;
    			printf("hipotenus: %d\n",hipotenus);
			}
		}
	}
}
