#include<bits/stdc++.h>
using namespace std;

// fully recursive
void bubbleSort(int a[], int n){
	//N-1 large elements to the end
	for(int itr=1;itr<=n-1;itr++)
	{
		//pairwise swapping in the unsorted of the array
		for(int j=0;j<=(n-itr-1);j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
}


int main(){
	int n,key;
    cin>>n;
    int a[1024];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }	
	bubbleSort(a, n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}