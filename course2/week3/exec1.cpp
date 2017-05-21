#include <iostream>
#include <cstring>
using namespace std;

char str[502];

int overturn(int x, int y){
  if( x < y){
    overturn(x+1, y);
    cout << str[x];
  } else if( x == y){
    cout << str[x];
  }

  return 0;
}

int main(){
  cin.getline(str, 501);

  int len = strlen(str);

  int x = 0;
  int y;

  for(int i = 0; i < len+1; i++){
    if(str[i] == ' ' || str[i] == '\0'){
      y = i;
      if( x != y){
        overturn(x, y-1);
      }
      cout << str[i];
      x = i + 1;
    }
  }

  return 0;
}
