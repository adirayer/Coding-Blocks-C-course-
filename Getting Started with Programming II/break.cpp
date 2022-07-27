#include <iostream>
using namespace std;
int main()
{
	int n=1;
	while(n<=10)
	{
		if(n==5)
		{
			break;
		}
		cout<<n;
		n=n+1;
	}
	return 0;
}