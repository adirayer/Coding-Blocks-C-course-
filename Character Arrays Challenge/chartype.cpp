#include<iostream>
#include<cstring>
using namespace std;

void toggleChars(char str[])
{
        int i;
        if (str[i]>='A' && str[i]<='Z')
            cout<<"U"<<endl;
        else if (str[i]>='a' && str[i]<='z')
            cout<<"L"<<endl;
        else
            cout<<"I"<<endl;
}

int main()
{
	char a[1];
	cin>>a;
	toggleChars(a);
	//cout<<a<<endl;
	return 0;
}