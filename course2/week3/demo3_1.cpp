// 放苹果
#include <iostream>
using namespace std;
int count(int m, int n){
  if(m == 1 || n == 1)
    return 1;
  
  if( m < n ){
    return count(m, m);
  } else {
    return count(m-1, n) + count(m, n-1);
  }
}


int main(){
  int apples, plates;
  cin >> apples >> plates;
  cout << count(apples, plates);
}