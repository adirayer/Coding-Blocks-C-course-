#include<iostream>
using namespace std;

void subseq(char *in, char *out, int i, int j)
{
	//base case
	if(in[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	//recursive case
	//1.ignore the ith character
	subseq(in,out,i+1,j);

	//2.take the uth character in output array
	out[j]=in[i];
	subseq(in,out,i+1,j+1);
}

int main()
{
	char in[]="abc";
	char out[100];

	subseq(in,out,0,0);

	return 0;
}