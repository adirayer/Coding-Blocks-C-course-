#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	char a[]="aditya";
	int freq[26]={0};

	//fill the freq array
	for(int i=0;a[i]!='\0';i++)
	{
		char ch=a[i];
		int indx=ch-'a';
		freq[indx]++;
	}

	// for(int i=0;i<26;i++)
	// {
	// 	cout<<freq[i]<<" ";
	// }

	for(int i=0;i<26;i++)
	{
		if(freq[i]>0)
		{
			char x=i+'a';
			cout<<" Character "<<x<<" --> "<<freq[i]<<endl;

		}
	}
	return 0;
}