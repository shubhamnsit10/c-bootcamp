#include<stdio.h>
int main(){
	int n,i,a=0;
	printf("Enter any number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=a+(i*i);
	}
	printf("The sum of squares first %d natural numbers is %d",n,a);
	return 0;
}
