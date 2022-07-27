#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100] = {0};
	for(int i=0; i<= n-1; i++)
	{
		cin>>a[i];
	}

	for(int i=n;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;

}




//approach 2
#include<iostream>
using namespace std;

int Reverse(int *a,int n,int i,int *f){
	//Base case
    if(i==n){
		return 0;
	}
	//Recursive case
	int val=a[i];
	 f[val]=i;
	 return Reverse(a,n,i+1,f);

}
int main() {
	int a[1000],f[1000];//added f as array
	int n;//removed f as int 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	Reverse(a,n,0,f);

for(int i=0;i<n;++i)//added this
   cout<<f[i]<<" ";

	return 0;
}