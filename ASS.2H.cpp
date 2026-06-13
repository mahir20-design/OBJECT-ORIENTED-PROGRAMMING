#include <iostream>
using namespace std;

int main() {
	int num;
	
	cout<<"Enter number:";
	cin>>num;
	
	if(num % 2!= 0) {
		cout<<"Number is odd."<< endl;
	}else{
		cout<<"Number is even."<< endl;
	}
	return 0;
}