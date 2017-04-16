#include <iostream>
using namespace std;

int main(){
  int n;
  int arr[15000];
  while(cin >> n){
    if( n == 0)
      break;

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
      int temp = 0;
      for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
          if(arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp; 
          }
        }
      }

      if( n % 2 == 0){
        cout << (arr[n/2-1] + arr[n/2]) / 2 << endl;
      } else {
        cout << arr[n/2] << endl;
      }
    }
  }
  
  return 0;
}