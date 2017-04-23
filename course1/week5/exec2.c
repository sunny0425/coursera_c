#include <iostream>
using namespace std;
int main(){
  int m, n, sum = 0;
  cin >> m >> n;
  if(m <= n){
    for(int i = m; i <= n; i=i+1 ) {
      if(i%2==1){
        sum = sum + i;
      }
    }
    cout << sum << endl;
  }
  return 0;
}