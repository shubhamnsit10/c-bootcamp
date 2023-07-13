#include<stdio.h>
int main(){
	int x;
	printf("Enter any number:");
	scanf("%d",&x);
	x=x/10;
	x=x*10;
	printf("x=%d",x);
	return 0;
}
