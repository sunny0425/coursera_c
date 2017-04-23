#include <iostream>
using namespace std;

int main(){
  int num;
  int a, b, c;
  cin >> num;

  a = num / 100;
  b = num / 10 % 10;
  c = num % 10;
  cout << a << endl << b << endl << c << endl;

  return 0;
}