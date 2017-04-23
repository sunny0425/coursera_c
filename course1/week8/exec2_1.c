#include <iostream>
using namespace std;

int main(){
  int arr[6];
  int i, a, sum = 0;

  for(i = 0; i < 6; i++){
    cin >> arr[i];
    if(i == 0)
      a = arr[i];
    else if(arr[i] < a)
      sum += arr[i];
  }
  
  cout << sum << endl;
  return 0;
}
