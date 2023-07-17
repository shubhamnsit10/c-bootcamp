#include<stdio.h>
int main(){
	int i=1,n;
	printf("Enter any Number:\n");
	scanf("%d",&n);
	printf("The first %d natural numbers are:\n",n);
	while(i<=n){
		printf("%d\n",i);
		i++;
	}
	return 0;
}
