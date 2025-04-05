#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z;
	for(x=1;x<=500;x++){
		for(y=1;y<=500;y++){
			for(z=1;z<=500;z++){
			if(pow(x,2)==pow(y,2)+pow(z,2))
			printf("%d\t%d\t%d\n",y,z,x);
		}
		}
	}

}
