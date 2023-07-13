#include<stdio.h>
int main(){
	int x,a;
	printf("Enter any three digit number:");
	scanf("%d",&x);
	a=x%10;
	x=x/10;
	a=(a*100)+x;
	printf("The new number is %d",a);
	
	return 0;
}
