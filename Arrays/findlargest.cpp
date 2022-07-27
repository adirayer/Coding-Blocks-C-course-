#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int a[]={1,6,4,8,2};
	int n=5;

	int mx=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(a[i]>mx)
		{
			mx=a[i];
		}
	}
	cout<<"Largest Number is: "<<mx<<endl;
	return 0;
}