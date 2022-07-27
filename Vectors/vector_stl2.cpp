#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> d{1,2,3,4,5};
	//push back O(1) for most of time
	d.push_back(16);

	//pop back removes last element O(1)
	d.pop_back();

	//insert some elements in middle
	d.insert(d.begin()+3,4,100); //specify posisiton
	//starting position , number of elements, element

	//erase some elemetns form middle O(N)
	d.erase(d.begin()+2);
	d.erase(d.begin()+2,d.begin()+5); //erase range of elements

	//size
	cout<<d.size()<<endl;
	cout<<d.capacity()<<endl;

	//we avoid the shrink operation
	d.resize(8);  //may or maynot change the underlying capacity o array
	//if size is increasing then more memory is allocated
	cout<<d.capacity()<<endl;

	//remove all the elements of vectors
	//doesnt delete the memeory occupied by the array
	d.clear();
	cout<<d.size()<<endl;

	//empty
	if(d.empty())
	{
		cout<<"This is an Empty Vector";
	}

	for(int x:d)
	{
		cout<<x<<",";
	}

	cout<<endl;
	d.push_back(10);
	d.push_back(11);
	d.push_back(40);

	cout<<d.front()<<endl; //display first element
	cout<<d.back()<<endl; //display last element

	//RESERVE
	int n;
	cin>>n;
	vector<int> v;
	//to avoid doubling we will use reserve function

	v.reserve(1000);//Capacity will not change
	for(int i=0;i<n;i++)
	{
		int no;
		cin>>no;
		v.push_back(no);
		cout<<"Change in Capacity "<<v.capacity()<<endl;
	}
	cout<<"Capacity "<<v.capacity()<<endl;
	for(int x:v)
	{
		cout<<x<<",";
	}

	return 0;
}