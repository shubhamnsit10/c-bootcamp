#include<stdio.h>
int main(){
	int n,fib1=0,fib2=1,fib3=0,i;
	printf("Enter any Number:\n");
	scanf("%d",&n);
	printf(" The first %d terms of Fibonacci series :\n",n);
	printf("%d\n",fib1);
	printf("%d\n",fib2);
	for(i=2;i<n;i++){
		fib3=fib1+fib2;
		printf("%d\n",fib3);
		fib1=fib2;
		fib2=fib3;

	}
	return 0;
}
