#include<iostream>
using namespace std;

bool isOdd(int n)
{
	int lsb=(n&1)== 0 ? 0 : 1;
	//lsb==1//non zerp value means true
	//lsb==0//false
	return lsb;
}

bool checkith(int n, int i)
{
	int mask=(1<<i);

	if((n&mask)>0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void setithbit(int &n, int i)
{
	int mask=(1<<i);
	n=(n|mask);
}

int setithbit1(int &n, int i)
{
	int mask=(1<<i);
	n=(n|mask);
	return n;
}

int main()
{
	int n;
	cin>>n;
	int i;
	cin>>i;
	if(isOdd(n))
	{
		cout<<n<<" Is Odd"<<endl;
	}
	else
	{
		cout<<n<<" Is Even"<<endl;
	}

	if(checkith(n,i))
	{
		cout<<i<<" Bit is"<<1<<endl;
	}
	else
	{
		cout<<i<<"rd bit is"<<0<<endl;
	}
	cout<<"Before Update N: "<<n<<endl;
	setithbit(n,i);
	cout<<"After Update N: "<<n<<endl;

	return 0;
}