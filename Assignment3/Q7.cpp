#include<stdio.h>
int main(){
	double a,b,c,discriminant;
	printf("Enter Coefficients a,b and c:\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	discriminant=b*b-4*a*c;
	if(discriminant>0){
		printf("The roots are real and distinct");
	}
	else if(discriminant==0){
		printf("The roots are real and equal");
	}
	else{
		printf("The roots are imaginary");
	}
	return 0;
}
