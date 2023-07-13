#include<stdio.h>
int main(){
	int num,x;
	printf("Enter given number:-");
	scanf("%d",&num);
	x=num/10;
	printf("The given number without its last digit %d",x);
	return 0;
}
