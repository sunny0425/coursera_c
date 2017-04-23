#include <iostream>
using namespace std;
int main(){
  int num;
  int arr[3] = {3, 5, 7};
  while(cin >> num){
    int flag = 0;
    for(int i = 0; i < 3; i++){
      if(num % arr[i] == 0){
        cout << arr[i] << ' ';
        flag = 1;
      }
    }

    if(flag == 0){
      cout << 'n';
    }
    cout << endl;
  }

  return 0;
}