#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void decimaltobinary(int n)
{
	int mask=(1<<30);
	bool isonefound = false;

	while(mask!=0)
	{
		if(((mask&n)==0) and isonefound==false)
		{
			mask=mask>>1;
			continue;
		}
		else
		{
			isonefound=true;
			if((mask&n)>0)
			{
				cout<<1;
			}
			else
			{
				cout<<0;
			}
			mask=mask>>1;
		}
	}
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	decimaltobinary(n);
	return 0;
}