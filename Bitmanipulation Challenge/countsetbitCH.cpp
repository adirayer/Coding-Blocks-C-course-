#include<iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
		int n;
        cin>>n;
		int ans=0;
		while(n>0)
		{
			if((n&1)==1)
			{
				ans++;
			}
		n=n>>1;
		}
		cout<<ans<<endl;
     }
	return 0;
}