#include<stdio.h>
float area(float Radius);
int main(){
	float r;
	printf("Enter the Radius:\n");
	scanf("%f",&r);
	printf("Area of circle is %.2f\n",area(r));
	return 0;
	
}
float area(float r){
	float area;
	area=3.14*r*r;
	return area;
}

