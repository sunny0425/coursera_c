#include <iostream>
using namespace std;

int main(){
  int n;
  int arr[100];
  while(cin >> n && n > 0 ){
    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }
    
    if( n == 1){
      cout << arr[0] << endl;
      continue;
    }
    if( n == 2){
      cout << (arr[0] + arr[1]) / 2 << endl;
      continue;
    }
  
    int left[100], right[100];
    int avg = 0;
    for(int i = 0; i < n; i++){
      int x = 0;
      int y = 0;
      for(int k = 0; k < n; k++){
        if(i == k) continue;
        if(arr[k] < arr[i]){
          left[x] = arr[k];
          x++;
        } else{
          right[y] = arr[k];
          y++;
        }
      }
      if( x != 0) {
        x = x-1;
      }
      if (y != 0){
        y = y-1;
      }
      if(n % 2 == 1){
        if( x == y){
          cout << arr[i] << endl;
          break;
        }  
      } else {
        if( x == y + 1 || x == y - 1){
          avg += arr[i];
        }
      }
    }

    if(n % 2 == 0){
      cout << avg/2 << endl;
    }
  }
  
  return 0;
}