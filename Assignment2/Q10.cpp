#include<stdio.h>
int main(){
	int num,d;
	printf("Enter a number and digit:");
	scanf("%d %d",&num,&d);
	num=num*10;
	num=num+d;
	printf("The new number is %d",num);
	return 0;	
}
