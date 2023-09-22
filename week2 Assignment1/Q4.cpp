#include<iostream>
using namespace std;
int main(){
	int l,b;
	float area,perimeter;
	cout<<"Enter the length of rectangle:\n";
	cin>>l;
	cout<<"Enter the bredth of rectangle:\n";
	cin>>b;
	area=l*b;
	perimeter=2*(l+b);
	cout<<"The area of rectangle is "<<area<<endl;
	cout<<"The perimeter of rectangle is "<<perimeter<<endl;
	if(area>perimeter){
		cout<<"Area is greater than perimeter";
	}
	else{
		cout<<"Perimeter is greater trhan area";
	}
	
}
