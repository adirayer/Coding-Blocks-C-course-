#include<iostream>
#include<cstring>

using namespace std;

void Copy(char largest[],char a[])
{
	int len=strlen(a);
	for(int i= 0; i<=len ; i++)
	{
		largest[i]=a[i];
	}
	return;
}


int main()
{
	char a[1000];
	char largest[1000];
	int largest_len=0;

	int n;
	cin>>n;
	cin.get();

	for(int i=0;i<n;i++)
	{
		cin.getline(a,1000);
		int len=strlen(a);

		if(largest_len<len)
		{
			largest_len=len;
			Copy(largest,a);
		}
	}
	cout<<largest<<endl;
	cout<<"Length : "<<largest_len<<endl;
}
