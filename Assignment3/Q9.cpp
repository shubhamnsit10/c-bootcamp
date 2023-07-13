#include<stdio.h>
int main(){
	int x,y,z;
	printf("Enter any three Numbers:\n");
	scanf("%d%d%d",&x,&y,&z);
	if(x>=y&&x>=z){
		printf("The gratest number is %d",x);
	}
	else if(y>=x&&y>=z){
		printf("The greatest number is %d",y);
	}
	else{
		printf("The greatest number is %d",z);
	}
	return 0;
}
