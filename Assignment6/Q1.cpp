#include<stdio.h>
int main(){
	int n,i,a=0;
	printf("Enter any Number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=a+i;
	}
	printf("The sum of first %d natural numbers is %d",n,a);
	return 0;
}
