#include <iostream>
using namespace std;

int main(){
  int mount;
  cin >> mount;

  int note[6] = {100, 50, 20, 10, 5, 1};
  int num[6];
  for(int i = 0; i < 6; i++){
    num[i] = mount / note[i];
    mount = mount % note[i];
    cout << num[i] << endl;
  }
  return 0;
}
