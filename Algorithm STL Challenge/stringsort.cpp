#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool compare(string a, string b)
{
    
    if (a.compare(0, b.size(), b) == 0 || b.compare(0, a.size(), a) == 0)
 
        return a.size() > b.size();
    else
        return a < b;
}


int main()
{
	int n;
	cin>>n;
	string s[n],temp;
	cin.get(); //cin.ignore()

	for (int i=0;i<n;i++)
	{
		getline(cin,s[i]);
	}
	//Sort
	for(int i = 0; i < n-1; ++i)
		for( int j = i+1; j < n; ++j)
		{
			if(s[i] > s[j])
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}	

	sort(s,s+n,compare);
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<endl;
	}

	cout<<endl;
	return 0;
}