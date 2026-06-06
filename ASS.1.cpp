#include <iostream>

using namespace std;

int main() {
	// statement here
	float score1,score2,score3,score4;
	float average;
	cout<<"Enter score 1:";
	cin>> score1;
	
	cout<<"Enter score 2:";
	cin>> score2;
	
	cout<<"Enter score 3:";
	cin>> score3;
	
	cout<<"Enter score 4:";
	cin>> score4;
	 
	 average=(score1 +score2 +score3 +score4)/4;
	 
	 cout<<"Average is:"<< average<< endl;
	return 0;
}