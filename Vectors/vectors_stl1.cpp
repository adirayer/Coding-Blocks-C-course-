#include<iostream>
#include<vector>

using namespace std;
int main()
{
	//create and inititalize vector
	vector<int> a; //define a vector
	vector<int> b(5,10); //five int with value 10- useful for init a vector of zeors(n,0)
	vector<int> c(b.begin(),b.end());
	vector<int> d{1,2,3,4,5};

	//look at how we can iterate over a vector
	for(int i=0;i<c.size();i++) //size method defines how many values your vector will contain
	{
		cout<<c[i]<<",";
	}
	cout<<endl;

	for(auto it=b.begin();it!=b.end();it++)
	{
		cout<<(*it)<<",";
	}

	cout<<endl;

	//for each loop
	for(int x:d)
	{
		cout<<x<<",";
	}
	cout<<endl;

	//more functions
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int no;
		cin>>no;
		v.push_back(no); //adds element to end of vector

	}
	for(int x:v)
	{
		cout<<x<<",";
	}

	cout<<endl;

	//both v and d have 5 elements
	//understand at memory level what is difference between b and v vectors
	cout<<v.size()<<endl; //how many elements vector contains
	cout<<v.capacity()<<endl; //size of underlaying array
	cout<<v.max_size()<<endl; //max no of elements a vector can hold 
							//in the worst case acc to available memory in system
	cout<<endl;

	cout<<d.size()<<endl;
	cout<<d.capacity()<<endl; 
	cout<<d.max_size()<<endl; 

	return 0;
}