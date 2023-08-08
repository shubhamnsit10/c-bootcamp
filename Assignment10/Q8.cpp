#include<stdio.h>
int fact(int n){
	int fact=1,i;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
int arrangement(int n,int r){
	int nPr;
	nPr=fact(n)/fact(n-r);
	return nPr;
}
int main(){
	int n,r;
	printf("Enter the Value of n:\n");
	scanf("%d",&n);
	printf("Enter the Value of r:\n");
	scanf("%d",&r);
	printf("Arrangements of %dP%d is %d",n,r,arrangement(n,r));
	return 0;
}
