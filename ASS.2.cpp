#include <iostream>
using namespace std;

int main() {
	float num1,num2;
	float sum,difference,product,quotient;
	
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number:";
	cin>>num2;
	 
	 sum=num1+num2;
	 difference=num1-num2;
	 product=num1*num2;
	 quotient=num1/num2;
	 
	 cout<<"Sum:"<< sum << endl;
	 cout<<"Difference:"<< difference <<endl;
	 cout<<"Product:"<< product << endl;
	 if(num2!=0) {
	 	cout<<"Quotient:" << quotient << endl;
	 }else{
	 	cout<<"Cannot divide by zero." << endl;
	 }
	 return 0;
}