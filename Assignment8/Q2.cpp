#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter any Number:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<=n;j++){
			if(j>=n-i){
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
