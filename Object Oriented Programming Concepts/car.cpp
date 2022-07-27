#include<iostream>
#include<cstring>
using namespace std;

//access speciiers - public and private

class car{
private:
	float price;
public:
	//float price;
	int model_no;
	char name[20];

	//constructor function
	car()
	{
		cout<<"Inside car constructor created by me default constructor is empty block."<<endl;
	}
	//parametrized constructor
	car(float p,int m, char *n)
	{
		price=p;
		model_no=m;
		strcpy(name,n);
	}

	car(car &x)
	{
		cout<<" Copy Constructor "<<" ";
		price=x.price;
		model_no=x.model_no;
		strcpy(name,x.name);
	}



	void print()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Model No:  "<<model_no<<endl;
		cout<<"Price: "<<price<<endl;
	}

	float get_discounted_price(float x)
	{
		return price*(1.0-x);
	}
	float apply_discount(float x)
	{
		price=price*(1.0-x);
		return price;
	}
	void set_price(float p){ //setter
		int msp =111;
		if(p>msp)
		{
			price=p;
		}
		else{
			price=msp;
		}

	}
	float get_price() //getter
	{
		return price;
	}
	~car()
	{
		cout<<"Inside Destructor of car"<<name<<endl;
	}
};

int main()
{
	//craete an object
	//car arr[20]; //store info about max 20 cars
	car c; //make a call to constructor function present inside the class
	
	car d(222,333,"Audi");
	cout<<" Car D "<<endl;
	d.print();

	car e(d); //copy constructor
	
	car f=e; //copy constructr

	e.set_price(400);
	cout<<" Car E "<<endl;
	e.print();

	//c.price=200;
	c.model_no=102;
	c.name[0]='B';
	c.name[1]='M';
	c.name[2]='W';
	c.name[3]='\0';
	//try to print
	//cout<<c.name<<" Model No : "<<c.model_no<<" Price : "<<c.price<<endl;
	c.set_price(-100);
	c.print();

	// cout<<"Enter the discount you want to give";
	// float discount;
	// cin>>discount;

	//cout<<c.get_discounted_price(discount);
	//cout<<c.apply_discount(discount);

	//cout<<sizeof(c)<<endl;
	//cout<<sizeof(car)<<endl;
	return 0;
}