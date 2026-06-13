#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long binary;
	int choice;
	cout<<"Enter a binary number:";
	cin>>binary;
	
	cout<<"\nSelect conversion :" << endl;
	cout<<"1. Binary to Decimal " << endl;
	cout<<"2. Binary to Hexadecimal"<<endl;
	cout<<"3. Binary to Octal" <<endl;
	cout<<"Enter choice:";
	cin>>choice;
	
	long long temp=binary;
	int decimal=0,i=0;
	
	while(temp!=0) {
		int remainder =temp %10;
		int power =1;
		for(int j=0;j<i;j++) {
			power*=2;
		}
		decimal+=remainder *power;
		temp /= 10;
		i++;
	}
	if (choice==1) {
		cout<<"Decimal:"<< decimal << endl;
	}else if(choice==2) {
		cout<<"Hexadecimal:" << hex << decimal<< endl;
	}else if(choice==3) {
		cout<<"Octal" << oct << decimal<< endl;
	}else {
		cout<<"Invalif choice"<< endl;
	}
	return 0;
}