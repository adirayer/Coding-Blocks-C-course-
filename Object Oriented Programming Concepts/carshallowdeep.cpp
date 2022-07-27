#include<iostream>
#include<cstring>
using namespace std;

class car{
private:
	float price;

public:
	int model_no;
	char *name;

	car()
	{
		name=NULL;
	}

	car(float p, int m, char *n)
	{
		price=p;
		model_no=m;
		name=new char[strlen(n)+1];
		strcpy(name,n);
	}

	car(car &X)
	{
		cout<<"Inside Copy Constructor";
		price=X.price;
		model_no=X.model_no;
		//Deep Copy
		name= new char[strlen(X.name)+1];
		strcpy(name,X.name);
	}

	void operator=(car &X)
	{
		price=X.price;
		model_no=X.model_no;
		//Deep Copy
		name= new char[strlen(X.name)+1];
		strcpy(name,X.name);
	}
	void setprice(float p)
	{
		price=p;
	}

	void print()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Model No:  "<<model_no<<endl;
		cout<<"Price: "<<price<<endl;
	}
	~car()
	{
		cout<<"Destroying Car "<<name<<endl;
		if(name!=NULL)
		{
			delete [] name;
		}
	}
};

int main()
{
	//Static Car
	car c(100,200,"BMW"); //parametrized constructor
	//car d(c); //copy constructor
	car d;
	d=c;
	d.name[0]='A';
	d.setprice(400);
	c.print();
	d.print();

	//Dyamically Created Car
	car *e=new car(1000,2000,"Ferrari");
	e ->print();
	delete e;

	return 0;
}