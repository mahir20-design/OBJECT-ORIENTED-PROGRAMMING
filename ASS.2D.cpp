#include <iostream>
using namespace std;

int main() {
	string userInput;
	
	cout<<"Enter string:" ;
	cin>>userInput;
	
	if(userInput=="hello") {
		cout << "Hello!"<< endl;
	}else{
		cout<<"Goodbye!"<< endl;
	}
	return 0;
}