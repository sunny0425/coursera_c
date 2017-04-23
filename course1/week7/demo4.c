#include <iostream>
using namespace std;
int main(){
  bool b1 = true, b2 = false;
  cout << "b1 = true 时， b1 = " << b1 << endl;
  cout << "b2 = false 时， b2 = " << b2 << endl;
  b1 = 7 > 3;
  b2 = -100;
  cout << "b1 = 7 > 3 时， b1 = " << b1 << endl;
  cout << "b2 = -100 时， b2 = " << b2 << endl;
  return 0;
}