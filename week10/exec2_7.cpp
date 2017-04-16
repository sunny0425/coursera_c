#include <iostream>
using namespace std;

int main(){
  int n;
  while(cin >> n && n){
    int arr[100];

    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }
    
    if( n == 1){
      cout << arr[0] << endl;
    } 

    if( n == 2){
      cout << (arr[0] + arr[1]) / 2 << endl;
    }

    if( n > 2) {
      int sum = 0;
      for(int i = 0; i < n; i++){
        int small = 0;
        int big = 0;
        for(int k = 0; k < n; k++){
          if(i == k) continue;
          if(arr[k] < arr[i]){
            small += 1;
          } else {
            big += 1;
          }
        }
        if( n % 2 != 0){
          // 奇数
          // cout << i << ' ' << small << ' ' << big << endl;
          if(small == big){
            cout << arr[i] << endl;
            break;
          }
        } else {
          // 偶数
          if(small == big + 1 || small == big - 1){
            sum += arr[i];
          }
        }
      }
      if( n % 2 == 0){
        cout << sum / 2 << endl;
      }
    }
  }
  
  return 0;
}