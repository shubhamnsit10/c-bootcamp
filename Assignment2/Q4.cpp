#include<stdio.h>
int main(){
	int x, y;
	printf("Enter any Two number:\n");
	scanf("%d%d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("The swaping of two number X is %d and y is%d",x,y);
	return 0;
}
