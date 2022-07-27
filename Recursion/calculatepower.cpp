#include<iostream>
using  namespace std;

int power(int i,int n)
{
	//base case
	if(n==0)
	{
		return 1;
	}
	//recursive case
	int smallerans=power(i,n-1);
	int biggerans=i*smallerans;

	return biggerans;

}
int main()
{
	int i;
	cin>>i;
	int n;
	cin>>n;
	cout<<power(i,n)<<endl;
	cout<<endl;

	return 0;
}