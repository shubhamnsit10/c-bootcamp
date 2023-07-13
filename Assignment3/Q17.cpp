#include<stdio.h>
int main(){
	float a,b,c;
	printf("Enter the length of three side of triangle a,b and c respectively\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>=c&&b+c>=a&&c+a>=b){
		printf("Yes,The triangle is valid");
	}
	else{
		printf("NO,The triangle is not valid");
	}
	return 0;
}
