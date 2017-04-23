#include <iostream>
using namespace std;
int main(){
  int a, b;
  char opt;
  while(cin >> a >> b >> opt){
    switch(opt){
      case '+': {
        cout << a + b << endl;
        break;
      }
      case '-': {
        cout << a - b << endl;
        break;
      }
      case '*': {
        cout << a * b << endl;
        break;
      }
      case '/': {
        if( b == 0){
          cout << "Divided by zero!" << endl;
        } else {
          cout << a / b << endl;
        }
        break;
      }
      default: {
        cout << "Invalid operator!" << endl;
      }
    }
  }
  return 0;
}