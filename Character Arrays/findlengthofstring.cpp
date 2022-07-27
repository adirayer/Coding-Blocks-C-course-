#include<iostream>
#include<cstring>
using namespace std;
int length(char a[])
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{

	}
	return i;
}

int main()
{
	char a[100];
	cin.getline(a,100); //helps taking input of a line
	int ans=length(a);
	cout<<ans<<endl;

	// inbuilt function to find length in character array
	// strlen(name_of_array)
	cout<<strlen(a)<<endl;
	return 0;
}