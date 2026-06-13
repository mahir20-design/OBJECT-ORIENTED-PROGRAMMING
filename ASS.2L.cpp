#include <iostream>
using namespace std;

int main() {
	float a,b,larger;
	
	cout<<"Enter two floating point numbers:";
	cin>>a>>b;
	
	larger=(a>b) ? a:b;
	cout<<"The larger value is:"<< larger<< endl;
	return 0;
}