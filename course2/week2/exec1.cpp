#include <iostream>
using namespace std;

int main(){
  int arr[100];
  int n;
  bool isCout = false;
  cin >> n;

  
  for(int i = 0; i < n; i++){
    cin >> arr[i];
    if( i == arr[i]){
      cout << i;
      isCout = true;
      break;
    }
  }
  if(!isCout)
    cout << 'N';

  return 0;
}
