#include<stdio.h>
int main(){
	int D,M,Y;
	printf("Enter Date Month Year (DD/MM/YEAR):");
	scanf("%d/%d/%d",&D,&M,&Y);
	printf("Day-%d ,Month-%d ,Year-%d",D,M,Y);
	return 0;
}
