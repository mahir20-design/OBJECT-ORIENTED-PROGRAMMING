#include <iostream>
using namespace std;

int main() {
	int a,b;
	cout<<"Enter first value:";
	cin>>a;
	cout<<"Enter second value:";
	cin>>b;
	
	if(a>b) {
		cout<<"First value is greater."<< endl;
	}else{
		cout<<"Second value is greater." << endl;
	}
	return 0;
}