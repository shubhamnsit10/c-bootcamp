#include<stdio.h>
int main(){
	int x,y,i,HCF=0;
	printf("Enter any  two Number:\n");
	scanf("%d%d",&x,&y);
	for(i=1;i<x*y;i++){
		if((i%x==0)&&(i%y==0)){
			HCF=(x*y)/i;
			printf("HCF of %d and %d is %d",x,y,HCF);
			break;
		}
	}
	return 0;
	
}
