#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter the first integer number:\n";
	cin>>num1;
	cout<<"Enter the second integer number:\n";
	cin>>num2;
	if(num1>num2){
		cout<<"The first number"<<num1<<" is largest";
	}
	if(num1<num2){
		cout<<"The second number"<<num2<<" is largest";
	}
	else{
		cout<<"The both number are equal";
	}
	
}
