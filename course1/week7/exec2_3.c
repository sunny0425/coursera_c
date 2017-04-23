#include <iostream>
using namespace std;

int main(){
  int n, k, i, j;
  cin >> n >> k;
  int arr[n];
  int tmp = 0;

  for(i = 0; i < n; i++){
    cin >> arr[i];
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n - i - 1; j++){
      if( arr[j+1] > arr[j]){
        tmp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = tmp;
      }
    }
    
  }
  // for( i = 0; i < n; i++){
  //   cout << arr[i] << ' ';
  // }
  // cout << endl;
  cout << arr[k-1] << endl;
  return 0;
}