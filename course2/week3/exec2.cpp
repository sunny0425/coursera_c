#include <iostream>
using namespace std;

void fun(int x){
  int y;
  if(x==1){
    cout << "End" << endl;
  } else{
    if(x % 2 == 0){
      y = x / 2;
      cout << x << "/2=" << y << endl;
    } else {
      y = x * 3 + 1;
      cout << x << "*3+1=" << y << endl;
    }
    fun(y);
  }
}

int main(){
  int num;
  cin >> num;
  fun(num);
  return 0;
}