#include <iostream>
using namespace std;

int main(){
	int r,c ;
	cin>>r>>c;
	
	int a[100][100];
	for(int i=0; i<=r-1 ; i++){
		for(int j=0; j<=c-1; j++){
			cin>>a[i][j];
		}
	}

	// Print 
	for(int row=0; row<=r-1 ; row++){
		if(row%2 == 0){
			for(int col=0; col<=c-1; col++){
				cout<<a[row][col]<<", ";
			}
		}
		else{
			for(int col= c-1; col>= 0; col--){
				cout<<a[row][col]<<", ";
			}
		}
	}
	cout<<"END"<<endl;
}