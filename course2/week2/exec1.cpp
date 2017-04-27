#include <iostream>
using namespace std;

int main(){
  int arr[100];
  int n = 0;
  while(cin >> n){
    int flag = 0;
    for(int i = 0; i < n; i++){
      cin >> arr[i];
      if( i == arr[i]){
        cout << i << endl;
        flag = 1;
        break;
      }
    }
    if(flag == 0)
      cout << 'N' << endl;
  }

  return 0;
}