#include <iostream>
using namespace std;
int main(){
  char c;
  cout << "enter a sentence: " << endl;
  while(cin.get(c))
    cout << c;
  return 0;
}