#include <iostream>
using namespace std;
int main() {
    
    int n1;
    cin>>n1;

    int n2;;
    cin>>n2;

    int series;
    int count = 1;
    int i = 1;
    
    while(count <= n1){
        series = 3*i + 2;
        if(series%n2 != 0 ){
            count++;
            cout<<series<<"\n";
        }
        i++;
    }

}