#include<bits/stdc++.h>
using namespace std;

int printPairs(int arr[], int n, int sum)
{
    int count = 0; 
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == sum)
                cout << arr[i] << " and "<< arr[j]<<endl;
            return 0;
}

int main() 
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int target;
	cin>>target;
    sort(arr,arr+n);
	printPairs(arr,n,target);
	return 0;
}