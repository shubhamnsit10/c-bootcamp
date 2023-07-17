#include<stdio.h>
int main(){
	int n,i,a=0;
	printf("Enter any Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=a+(2*i);
	}
	printf("The sum of first %d even natural numbers is %d",n,a);
	return 0;
}
