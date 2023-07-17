#include<stdio.h>
int main(){
	int num,a,d=0;
	printf("Enter any Number:-\n");
	scanf("%d",&num);
	while(num>0){
		a=num%10;
		num=num/10;
		d=d*10+a;
	}
	printf("The reverse a given number is %d",d);
	return 0;
	
}
