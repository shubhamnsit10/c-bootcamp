#include<stdio.h>
int main(){
	float rad,area;
	printf("Enter Radius of circle:");
	scanf("%f",&rad);
	area=3.14*rad*rad;
	printf("Area of circle is %.2f having the radius %.2f",area,rad);
	return 0;
}
