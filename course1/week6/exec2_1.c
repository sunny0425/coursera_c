#include <iostream>
using namespace std;

int main(){
  int n; // n个苹果
  int x; // 虫子每x小时能吃掉一个苹果
  int y; // 经过y小时
  int eat; // 吃了多少个苹果
  int rest; // 剩余多少个苹果

  cin >> n >> x >> y;

  if( y % x == 0){
    eat = y / x;
  } else {
    eat = y / x + 1;
  }
  rest = n - eat;
  if ( rest < 0 ){
    rest = 0;
  }

  cout << rest << endl;

  return 0;
}