#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
    cin>>n;
     int a[1024];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }

	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans^=a[i];
	}
	int result=ans; //5^3
	//1. extract the bit position with value 1,that would mean it would be different i both the unique numbers
	int pos=0;
	while(ans>0)
	{
		if((ans&1)>0)
		{
			break;
		}
		pos++;
		ans=ans>>1;
	}
	//we need to start seperation of the numbers according to bit number
	int x=(1<<pos);
	//cout<<x<<endl;
	int un1=0;
	for(int i=0;i<n;i++)
	{
		if((a[i]&x)==0)
		{
			un1^=a[i];
		}
	}
	cout<<un1;
	int un2=result^un1;
	cout<<" "<<un2<<endl;

	return 0;
}