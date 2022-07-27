#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	//pair<int,int> p(500,200);

	// pair<int,int>p;
	//p=make_pair(22,42);
	// p.first=10;
	// p.second=101;

	// pair<string,int>p;
	// p=make_pair("AUDI",2000);
	// cout<<"First: "<<p.first<<endl;
	// cout<<"Second: "<<p.second<<endl;

	pair<string,pair<float,int> >p;
	p.first="Mercedes";
	p.second.first=10.11;
	p.second.second=12;
	cout<<p.first<<endl;
	cout<<p.second.first<<endl;
	cout<<p.second.second<<endl;

	
	return 0;
}