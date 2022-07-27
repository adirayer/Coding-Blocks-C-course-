#include <iostream>
using namespace std;

int main(){

  int no, reverse = 0;
  cin>>no;

  while(no>0){
    reverse = (10*reverse) + (no%10) ;

    no = no/10;
  }
  cout<<reverse<<endl;;
}