#include<stdio.h>
int main(){
	int i=1,n;
	printf("Enter any Number:\n");
	scanf("%d",&n);
	printf("The cubes of the first %d natural numbers:\n",n);
	while(i<=n){
		printf("%d\n",i*i*i);
		i++;
	}
	return 0;
}
