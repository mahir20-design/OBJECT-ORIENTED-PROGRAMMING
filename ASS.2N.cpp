#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long binary;
	long long decimal=0;
	int i =0;
	
	cout<<"Enter a binary number :";
	cin>>binary;
	
	while(binary!=0) {
	int	 remainder =binary % 10;
		 
		 int power =1;
		 for(int j =0; j<i;j++) {
		 	power*=2;
		 }
		decimal+= remainder*power;
		binary /=10;
		i++;
	}
	cout<<"Decimal value :" << decimal<< endl;
	return 0;
}