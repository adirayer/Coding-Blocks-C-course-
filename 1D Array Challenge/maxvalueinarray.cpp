#include <iostream>
using namespace std;

int findMax(int a[100] , int n){
	int max = a[0];
	for(int i=1; i<= n-1; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	return max;
}

int main(){
	// Program to find max value in a array
	// Input the array

	int n;
	cin>>n;
	int a[100] = {0};
	for(int i=0; i<= n-1; i++){
		cin>>a[i];
	}

	cout <<findMax(a,n)<<endl;
}