#include<stdio.h>
int main(){
	int num,sum=0;
	printf("Enter any three digit number:");
	scanf("%d",&num);
	sum=num%10;
	num=num/10;
	sum=(num%10)+sum;
	num=num/10;
	sum=sum+num;
	
	printf("The sum of three digit number is %d",sum);
	return 0;
}
