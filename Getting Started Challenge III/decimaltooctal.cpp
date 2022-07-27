#include <iostream>
using namespace std;
int main ()
{
    int num;
    cin >> num;
    int sum = 0, power = 1;
    while (num != 0)
    {
        int t;
        t = num%8;
        num = num/8;
        sum = sum + t*power;
        power = power*10;
    }
    cout << sum;
    return 0;
}