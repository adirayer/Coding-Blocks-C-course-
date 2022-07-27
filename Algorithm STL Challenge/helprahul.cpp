#include<iostream>
#include<algorithm>
using namespace std;

int main()
{	
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

	int key;
	cin>>key;

	int *ans=find(arr,arr+n,key);

	int indx=ans-arr; //subtracting the address gives us the indx pf ans address bucket
	if(indx==n)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		cout<<indx<<endl;
	}
	return 0;
}