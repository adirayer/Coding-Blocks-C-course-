#include<iostream>
#include<cstring>
using namespace std;

bool compare(char a[],char b[])
{
	int i=0;
	int j=0;
	int lena=strlen(a);
	int lenb=strlen(b);

	while(i<lena and j<lenb)
	{
		if(a[i]!=b[j])
			{
				return false;
			}
			i++;
			j++;
	}
	if(a[i]!='\0' || b[j]!='\0')
	{
		return false;
	}
	else
	{
		return true;
	}
}

void concat(char a[],char b[])
{
	int i=strlen(a);
	int lenb=strlen(b);

	for (int j=0;j<=lenb;j++)
	{
		a[i]=b[j];
		i++;
	}
}

int main()
{
	char a[2000];
	char b[2000];

	cin.getline(a,1000);
	cin.getline(b,1000);

	//if(compare(a,b)==true)
	if(strcmp(a,b)==0) //strcmp returns comparison inbuit function
	{	//returns 0 if strings match
		//returns 1 if strings don't match
		cout<<"Match"<<endl;
	}
	else
	{
		cout<<"Not Match"<<endl;
	}
	
	// cout<<"Before Concatenation a: "<<a<<endl;
	// cout<<"Before Concatenation b: "<<b<<endl;
	
	// concat(a,b);
	// //strcat(a,b); it will append the string a to string b inbuilt function
	// cout<<"After Concatenation a: "<<a<<endl;
	// cout<<"After Concatenation b: "<<b<<endl;
	
	return 0;
}