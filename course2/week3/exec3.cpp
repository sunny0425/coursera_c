#include <iostream>
using namespace std;

void fun(char str[], int x, int y){
  char a, b;
  a = str[x];
  b = str[y];

  if(a == '\0' || b == '\0'){
    return;
  }

  if(a == '@'){
    x = x - 1;
    fun(str, x, y);
  } else {
    if( a != b){
      cout << x << ' ' << y << endl;
      str[x] = '@';
      str[y] = '@';
      if( x == 0){
        x = y + 1;
        y = x + 1;

        fun(str, x, y);
      } else {
        x = x - 1;
        y = y + 1;
        fun(str, x, y);
      }
    } else {
      x = y;
      y = y + 1;
      fun(str, x, y);
    }
  }
}

int main(){
  char str[101];
  cin.getline(str, 100);

  int x, y;
  x = 0;
  y = x + 1;

  fun(str, x, y);

  return 0;
}
