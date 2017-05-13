#include <iostream>
using namespace std;

int q(int n){
  if( n == 0)
    return 1;
  else
    return q(n-1) + n;
}

int main(){
  cout << q(4);
  return 0;
}