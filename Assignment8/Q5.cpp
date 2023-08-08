#include<stdio.h>
int main(){
	int n=5,i,j;
	printf("Enter any number:\n");
	scanf("%d",n);
	for(i=0;i<n;i++){
		for(j=0;j<n+i;j++){
			if(n-i<=j){
				printf("*");
			}
			else{
				printf(" ");
			}	
		}
		printf("\n");
	}
	return 0;
}
