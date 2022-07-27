#include <iostream>
using namespace std;

int linearSearch(int array[10] , int number)
{
	for(int i=0;i<10;i++)
	{
		if(array[i] == number)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;
	int a[100] = {0};
	for(int i=0; i<= n-1; i++)
	{
		cin>>a[i];
	}

	int key;
	cin>>key;
	int index = linearSearch(a,key);
	
	if(index>=0)
		{
			cout <<index << endl;
		}
	else if(index<n)
	{
		cout << "-1" << endl;
	}

}