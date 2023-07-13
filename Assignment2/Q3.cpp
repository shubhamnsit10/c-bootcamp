#include<stdio.h>
int main(){
	int x, y,c;
	printf("Enter any two Number:\n");
	scanf("%d%d",&x,&y);
	c=x;
	x=y;
	y=c;
	printf("The swaping of two number is %d and %d",x,y);
	return 0;
	
}


