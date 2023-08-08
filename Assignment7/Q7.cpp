#include<stdio.h>
int main(){
	int num1,num2,N,i,count;
	printf("Enter any  Two positive number:\n");
	scanf("%d %d",&num1,&num2);
	printf("All Prime numbers %d and %d are:\n",num1,num2);
	for(N=num1;N<=num2;N++){
		count=0;
		for(i=2;i<=N/2;i++){
			if(N%i==0){
				count++;
				break;
			}
		
		}
		if((count ==0) && (N!=1)){
			printf(" %d ",N);
			break;
		}
	}
	return 0;
}
