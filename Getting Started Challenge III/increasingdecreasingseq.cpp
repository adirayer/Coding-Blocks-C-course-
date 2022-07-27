#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n; cin>>n;
	ll start; cin>>start;
	n--;
	ll increase = 0;
	while(n--)
	{
		ll no; cin>>no;
		if((no<start && increase==0) || (no>start && increase==1))
			start = no;
		else if(no>start && increase==0)
		{
			start = no;
			increase =1;
		}
		else
		{
			cout<<"false\n";
			return 0;
		}
	}
	cout<<"true\n";
	// cout<<start;
	return 0;
}