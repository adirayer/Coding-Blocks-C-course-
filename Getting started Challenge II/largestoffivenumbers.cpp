#include<iostream>
#include<climits>

using namespace std;
int main()
{
	int i=1;
	

	int largest=INT_MIN; // INT_MIN=-2^31, INT_MAX=2^31-1
	int no;

	while(i<=5)
	{	
		cin>>no;
		if(largest<no)
		{
			largest=no;
		}
		i=i+1;
	}
	cout<<largest;
	return 0;
}