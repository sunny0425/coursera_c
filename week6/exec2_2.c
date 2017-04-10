#include <iostream>
using namespace std;
#include <math.h>
#define PI 3.14159

int main(){
  int h, r, n;
  double v;
  cin >> h >> r;
  v = PI * r * r * h / 1000;

  n = ceil(20 / v);
  
  cout << n << endl;
  return 0;
}