#include<iostream>
#include<cstring>
using namespace std;



void longestKunique(char a[],int k)
{
	int freq[25]={0};
	int cnt=0;
	int len=-1;
	int i=0;
	for (int j=0;a[j]!='\0';j++)
	{
		freq[a[j]-'a']++;
		if(freq[a[j]-'a']==1)
		{
			cnt++;
		}
		while(cnt>k)
		{
			//here we have more than k unique characters
			//so shrink the window
			freq[a[i]='a']--;
			if(freq[a[i]-'a']==1)
			{
				cnt--;
			}
			i++;
		}
		if(cnt==k)
		{
			len=max(len,j-i+1);
		}
	}
	cout<<"Largest string length with "<< k <<" Unique Characters "<<len<<endl;
}

int main()
{
	char a[]="abbcceddd";
	int k=3;
	longestKunique(a,k);
	return 0;
}