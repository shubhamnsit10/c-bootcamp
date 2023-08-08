#include <stdio.h>
int fact(int n){
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
int combi(int n,int r){
	int nCr;
	nCr=fact(n)/(fact(r)*fact(n-r));
	return nCr;
}
int main(){
	int n,r;
	printf("Enter the Value of n:\n");
	scanf("%d",&n);
	printf("Enter the Value of r:\n");
	scanf("%d",&r);
	printf("Combination of %dC%d = %d\n",n,r,combi(n,r));
	return 0;
}
