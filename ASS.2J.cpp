#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout<<"Enter integer:";
	cin>>num;
	
	if(num % 2!= 0 && num % 3==0){
		cout<<"Number is odd and divisible by 3."<< endl;
	}else{
		cout<<"Number is not odd and  divisible by 3."<<endl;
	}
	return 0;
}