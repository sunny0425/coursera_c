#include <iostream>
using namespace std;

int main(){
  int l, m;
  int arr[10000];

  cin >> l >> m;
  for(int i = 0; i <= l; i++){
    arr[i] = 1;
  }

  int _start, _finish;
  for(int i = 0; i < m; i++){
    cin >> _start >> _finish;
    for(int j = _start; j <= _finish; j++ ){
      arr[j] = 0;
    }
  }

  int count = 0;
  for(int i = 0; i <= l; i++){
    if(arr[i] != 0){
      ++count;
    }
  }
  cout << count << endl;

  return 0;
}
