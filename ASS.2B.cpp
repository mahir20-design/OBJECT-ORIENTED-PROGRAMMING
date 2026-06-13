#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double radius ;
	cout<<"Enter radius:";
	cin>>radius;
	double area= M_PI * radius*radius;
	cout<< "Area of circle:" << area <<endl;
	return 0;
}