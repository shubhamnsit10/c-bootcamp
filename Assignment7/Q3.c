#include<stdio.h>
int main(){
	int n, fib1=0,fib2=1,fib3=0,i,x,flag=0;
	printf("Enter Any number:\n");
	scanf("%d",&n);
	printf("Enter any Number:\n");
	scanf("%d",&x);
	for(i=2;i<n;i++){
		fib3=fib1+fib2;
		if(x==fib3){
			flag=1;
		}
	}
	if(flag==0){
		printf("NO, %d is not present in fibonacci series",x);
		
	}
	else{
		printf("Yes, %d is present in fibonacci series",x);
	}
	return 0;
}
