#include <iostream>
#include <cstring>
using namespace std;

int overturn(char str[501], int x, int y){
  if( x < y){
    overturn(str, x+1, y);
    cout << str[x];
  } else if( x == y){
    cout << str[x];
  }

  return 0;
}

int main(){
  char str[501];
  cin.getline(str, 500);

  int len = strlen(str);

  int x = 0;
  int y;

  for(int i = 0; i < len+1; i++){
    if(str[i] == ' ' || str[i] == '\0' || str[i] = '\t'){
      y = i;
      if( x != y){
        overturn(str, x, y-1);
      }
      cout << str[i];
      x = i + 1;
    }
  }

  return 0;
}
