#include <iostream>
using namespace std;

int main(){
  int n, m;
  int a[20];
  int last;
  cin >> n >> m;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  } 

  int k = 1;
  for(k = 1; k <= m; k++){
    last = a[n-1];
    for(int i = n - 1; i >= 0; i--){
      a[i] = a[i-1];
    }
    a[0] = last;
  }
  for(int i = 0; i < n; i++){
    cout << a[i] << ' ';
  }
  cout << endl;
  return 0;
}