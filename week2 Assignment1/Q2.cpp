#include<iostream>
using namespace std;
int main(){
	int r;
	float area,perimeter;
	float pie=3.14;
	cout<<"Enter the radius of the circle\n";
	cin>>r;
	area=pie*r*r;
	perimeter=2*pie*r;
	cout<<"The area of circle is"<<area<<endl;
	cout<<"The perimeter of circle is "<<perimeter<<endl;
	if(area>perimeter){
		cout<<"The area of circle is greater than perimeter";
	}
	else{
		cout<<"The perimeter of circle is greater than area";
	}
}
