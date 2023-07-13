#include<stdio.h>
int main(){
	int num,x;
	printf("Enter any Number:");
	scanf("%d",&num);
	x=num%10;
	printf("The unit digit of given number is %d",x);
	return 0;
	
}
