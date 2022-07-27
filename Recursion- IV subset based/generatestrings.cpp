#include<iostream>
using namespace std;

void generatestring(char *in, char *out,int i,int j)
{
	//base case
	if(in[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	//recursive case
	//1. lets take a single digit number
	int fd=in[i]-'0';
	char ch=fd+'A'-1;
	out[j]=ch;
	generatestring(in,out,i+1,j+1);

	//2. lets take a two digit number(<=26)
	if(in[i+1]!='\0')
	{
		int sd=in[i+1]-'0';
		int no=10*fd+sd;
		if(no<=26)
		{
			char ch=no+'A'-1;
			out[j]=ch;
			generatestring(in,out,i+2,j+1);
		}
	}
}

int main()
{
	char in[100],out[100];
	cin>>in;
	generatestring(in,out,0,0);

	return 0;
}