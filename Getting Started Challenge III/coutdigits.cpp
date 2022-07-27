#include <iostream>
using namespace std;

int main(){
	int no;
	cin>> no;

	short int digit;
	cin>>digit;

	short int count = 0;

	while(no>0){
		int last_digit = no%10;
		if(last_digit == digit){
			count++;
		}

		no/=10;
	}

	cout<<count<<endl;
	return 0;
}