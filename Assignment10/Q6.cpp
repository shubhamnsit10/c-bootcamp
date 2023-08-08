#include<stdio.h>
int fact(int n){
	int fact=1,i;
	for(i=1;i<=n;i++)
		fact=fact*i;
	return fact;
	
}
int main(){
	int num;
	printf("Enter the number to find factorial:\n");
	scanf("%d",&num);
	printf("Factorial of %d is %d\n\n",num,fact(num));
	return 0;
}
