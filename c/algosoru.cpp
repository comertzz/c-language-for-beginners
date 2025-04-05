#include<stdio.h>
int main(){
int arr[5]={5,2,7,1,3};
arr[2]=arr[3];
arr[2]=arr[2]+arr[3];
printf("%d,%d",*arr+1,*arr+2);
}
