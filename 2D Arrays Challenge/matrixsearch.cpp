#include <iostream>
using namespace std;

int main(){
	int m,n;
	cin>> m>> n;

	int a[100][100];
	int val = 10;

	for(int i=0; i<=m-1; i++){
		for(int j=0; j<=n-1; j++){
			cin>>a[i][j];		

		}
	}	

	int key;
	cin>>key;

	int row = 0;
	int col = n-1;
	while(row < m and col >= 0){
		if(a[row][col] == key){
			// found
			cout<<1<<endl;
			return 0;
		}
		else if(a[row][col] > key){
			col--;
		}
		else{
			row++;
		}
	}
	cout<<0<<endl;
	return 0;
}