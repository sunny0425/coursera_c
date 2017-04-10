#include <iostream>
using namespace std;
int main(){
  int n, i;
  int sum  = 0;
  cin >> n;
  for(i = 10; i < n; i++){
    sum = i/10 + i%10;
    if( i%sum == 0 ){
      cout << i << endl;
    }
  }

  return 0;
}