#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
	return a<b;
}

// fully recursive
void bubbleSortRec(int arr[], int i, int n){
	// Base case
	if(n==1) return;
	if(i==n-1){
		//single pass of the current array has been done
		return bubbleSortRec(arr, 0, n-1);
	}
	
	if(compare(arr[i+1], arr[i])){
		swap(arr[i+1], arr[i]);
	}
	bubbleSortRec(arr, i+1, n);
}


int main(){
	int n;
    cin>>n;
    int arr[1024];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }	
	bubbleSortRec(arr,0, n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}