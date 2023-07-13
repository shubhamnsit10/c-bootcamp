#include<stdio.h>
int main(){
	int x;
	printf("Enter any number:");
	scanf("%d",&x);
	(x&1)?printf("odd"):printf("Even");
	return 0;
	
}
