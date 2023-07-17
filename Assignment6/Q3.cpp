#include<stdio.h>
int main(){
	int i,n,a=0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=a+(2*i-1);
	}
	printf("The sum of first %d even natural numbers is %d",n,a);
	return 0;
}
