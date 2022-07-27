#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
// int main ()
// {
//     int num;
//     cin >> num;
//     int sum = 0, power = 1;
//     while (num > 0)
//     {
//         int t;
//         t = num%2;
//         num = num/2;
//         sum = sum + t*power;
//         power = power*10;
//     }
//     cout << sum;
//     return 0;
// }

// void decimaltobinary(int n)
// {
//     int sum = 0, power = 1;
//     while (num > 0)
//     {
//         int t;
//         t = num%2;
//         num = num/2;
//         sum = sum + t*power;
//         power = power*10;
//     }
//     cout << sum<<endl;

// }

void decimaltobinary(int n)
{
    int power = 1;
    string s;
    while (n > 0)
    {
        //s.push_back('0'+n%2);
        if(n%2==0)
        {
            s.push_back('0');
        }       
        else
        {
            s.push_back('1');
        }
        n = n/2;
        
    }
    reverse(s.begin(),s.end());
    cout << s<<endl;

}
//approach 2 using bitwise operators
void decimaltobinarybit(int n)
{
    int sum = 0, power = 1;
    while(n>0)
    {
        sum = sum + (n&1)*power;
        power = power*10;
        //cout<<(n&1);
        n=n >> 1;
    }
    cout<<sum<<endl;
}
int main()
{
    int n;
    cin>>n;
    decimaltobinary(n);
    decimaltobinarybit(n);
}