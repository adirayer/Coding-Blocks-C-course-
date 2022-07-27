template<typename T>



//This works only for integers so we make it templated class so we can use it with any atatype
class Vector{
	int cs;
	int ms;
	//int *arr;
	T *arr;

public:
	Vector()
	{
		cs=0;
		ms=1;
		//arr=new int[ms];
		arr=new T[ms];
	}
	//void push_back(const int d)
	void push_back(const T d)
	{	
		if(cs==ms)
		{
			//Array is full
			//arr *oldArr=arr;
			T *oldArr=arr;
			arr=new T[2*ms];
			//arr=new int[2*ms];
			ms=2*ms;
			for(int i=0;i<cs;i++)
			{
				arr[i]=oldArr[i];
			}
			//clear the old memory
			delete[] oldArr;
		}
		arr[cs]=d;
		cs++;
	}

	void pop_back()
	{
		cs--;
	}
	//int front() const
	T front() const
	{
		return arr[0];
	}
	
	//int back() const
	T back() const
	{
		return arr[cs-1];
	}
	bool empty() const
	{
		return cs==0;
	}
	int capacity() const
	{
		return ms;
	}

	//int at(const int i)
	T at(const int i)
	{
		return arr[i];
	}
	int size()
	{
		return cs;
	}

	//operator overloading
	//int operator[](const int i)
	T operator[](const int i)
	{
		return arr[i];
	}

};