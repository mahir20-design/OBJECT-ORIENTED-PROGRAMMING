#include <iostream>
using namespace std;

int main() {
	int a,b,larger;
	
	cout<<"Enter two integers:";
	cin>>a>>b;
	
	larger=(a>b) ? a :b;
	
	cout<<"The larger value is:" <<larger <<endl;
	return 0;
}