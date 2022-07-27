#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[]={10,4,8,9,5,5,5,10};
	int n=sizeof(a)/sizeof(int);
	//int key;
	//cin>>key;

	int *ans=lower_bound(a,a+n,5);
	//cout<<"Value: "<<*ans<<endl;
	cout<<"Lower Bound Value: "<<ans-a<<endl;

	int *up=upper_bound(a,a+n,5);
	//cout<<"Value: "<<*up<<endl;
	cout<<"Upper Bound Value: "<<up-a-1<<endl;

	cout<<"Number of occurances of 5 : "<<up - ans<<endl;
	
	return 0;
}