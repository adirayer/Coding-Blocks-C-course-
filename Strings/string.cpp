#include<iostream>
#include<string>

using namespace std;

int main()
{
	//initializaton
	string s="hello";
	cout<<s<<endl;

	for (int i=0;i<s.length();i++)
	{
		cout<<s[i]<<" ";
	}
	cout<<endl;

	//2nd way
	string s2=s;
	cout<<s2<<endl;

	//3rd way
	string s3=s2;
	cout<<s3<<endl;

	//using character array

	char a[]="Hello world!";
	string s4(a);
	cout<<s4<<endl;

	//update the string 
	s="I am lerning string updates";
	cout<<"Updated String : "<<s<<endl;

	//concat
	string x="Hello";
	string y="Aditya";
	//x=x+" "+y;
	x+=y;//does same as above
	cout<<x;

	//Find a particular word inside a string
	s="I am lerning string updates";
	string word = "lerning";
	cout<<"Learning is present at: "<<s.find(word)<<endl;

	//delete/erase the word
	int indx=s.find(word);
	s.erase(indx,word.length()+1);
	cout<<s<<endl;

	return 0;
}