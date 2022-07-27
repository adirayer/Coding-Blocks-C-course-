#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int p,n,o=0,m,z=0;
		cin>>p>>m;
   for(n=p;n<=m;n++)
   { o=__builtin_popcount(n);
		z+=o;
		//cout<<o<<"\n";
	} cout<<z<<"\n";
	
}
return 0;
}