#include<iostream>
using namespace std;


void clearrange(int &n,int j, int i)
{
	int ma=(~0);
	ma=ma<<j;
	//int mb=2^i-1;
	int mb=(1<<i)-1;
	int mask=ma|mb;
	n=n & mask;
}

void updaterange(int &n,int m,int i,int j)
{
	//1update m
	m=m<<(i-1);
	//2.update or claear the range of n(j,i-1)
	clearrange(n,j,i-1);
	//update n 
	n=n|m;
}

int main()
{
	int n=15;
	int m=2;

	int i=2;
	int j=4;
	updatebits(n,m,i,j);
	cout<<"updated n"<<endl;//8

	return 0;
}