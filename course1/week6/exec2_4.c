#include <iostream>
using namespace std;
#include <stdlib.h>

int main(){
  int arr[6];
  int max_odd = 0; // 最大奇数
  int min_even = 0; // 最小偶数
  int d;

  for(int i = 0; i < 6; i++) {
    cin >> arr[i];
    if(arr[i] % 2 == 0) { // 偶数
      if(min_even == 0 || arr[i] < min_even){
        min_even = arr[i];
      }
    } else {
      if(arr[i] > max_odd){
        max_odd = arr[i];
      }
    } 
  }

  d = abs(max_odd - min_even);
  cout << d << endl;

  return 0;
}