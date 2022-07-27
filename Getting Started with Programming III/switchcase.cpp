#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;

	// N:nrth, S:south, E: East, W:West
	switch(ch)
	{
		case 'n':
		case 'N': //Task for N
				cout<<"North"<<endl;
				break;
		case 's':
		case 'S':
				cout<<"South"<<endl;
				break;
		case 'w':
		case 'W':
				cout<<"West"<<endl;
				break;
		case 'e':
		case 'E':
				cout<<"East"<<endl;
				break;
		default:
				cout<<"invalid Input"<<endl;
	}

	cout<<endl;
	return 0;
}