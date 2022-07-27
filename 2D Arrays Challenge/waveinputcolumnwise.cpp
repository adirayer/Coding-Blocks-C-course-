#include <iostream>
using namespace std;

int main(){
	//Program to print 2d array like wave column wise


	int r,c ;
	cin>>r>>c;
	
	int a[100][100];
	// 2d Array
	//int val = 11;
	for(int i=0; i<=r-1 ; i++){
		for(int j=0; j<=c-1; j++){
			//a[i][j] = val;
			cin>>a[i][j];
			//val++;
		}
		//cout<<endl;
	}
	//cout<<endl;

	// Print 
	for(int col=0; col<=c-1 ; col++){
		if(col%2 == 0){
			for(int row=0; row<=r-1; row++){
				cout<<a[row][col]<<", ";
			}
		}
		else{
			for(int row= r-1; row>= 0; row--){
				cout<<a[row][col]<<", ";
			}
		}
	}
	cout<<"End"<<endl;
}