#include <iostream>
using namespace std;

int main(){
  int n, m;
  int a[20];
  int b[20];
  int k;
  cin >> n >> m;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  } 

  for(int i = 0; i < n; i++){
    k = (i+m)%n;
    b[k] = a[i];
  } 

  for(int i = 0; i < n; i++){
    cout << b[i] << ' ';
  }
  cout << endl;

  return 0;
}