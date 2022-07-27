#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,num;
	cin>>n;
	int i;
	for(i=1;i<=n;i++)
	{
		cin>>num;
		int count = 0;
		int sum =0;
		int temp;
		while(num>0)
		{
			temp = (num%10)*pow(2,count++);
			sum += temp;
			num /= 10;
		}
		cout<<sum<<endl;
	}
	return 0;
}