#include <iostream>
using namespace std;

int armstrong(int num1,int num2)
{
   for(int i = num1; i <= num2; i++)
  {
        int sum = 0;
        int num;

        for(num=i; num > 0; num /= 10)
        {
            int digit = num % 10;
            sum = sum + digit * digit * digit;
        }

        if(sum == i)
        {
            return i;
        }
  }
 return 0;
}

int main()
{
  int num1, num2;

  //cout << "Enter first number: ";
  cin >> num1;

  //cout << "Enter second number: ";
  cin >> num2;

  cout <<armstrong(num1,num2);
  cout<<endl;
  return 0;
}