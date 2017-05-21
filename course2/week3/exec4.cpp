#include <iostream>
#include <cstring>
using namespace std;
char str[100];

int findRight(int x){
  // cout << x << str[x] << endl;
  int y;
  if(str[x] == '\0'){
    return -1;
  }

  switch(str[x]){
    case '(': {
      y = findRight(x+1);
      if( y == -1){
        return -1;
      } else {
        str[x] = '0';
        return findRight(y+1);
      }
    }
    case ')': {
      str[x] = '0';
      return x;
    }
    case '0': {
      return findRight(x+1);
    }
    default: {
      str[x] = '0';
      return findRight(x+1);
    }

  }
}

  

int main(){
  cin.getline(str, 99);
  cout << str << endl;

  int len = strlen(str);

  for(int i = 0; i < len; i++){
    
    if(str[i] == '0' || str[i] == '?' || str[i] == '$'){
      continue;
    } else {
      cout << i << str[i] << endl;
      switch(str[i]){
        case '(': {
          if(findRight(i+1) != -1){
            str[i] = '0';
          } else {
            str[i] = '$';
          };
          break;
        }
        case ')': {
          str[i] = '?';
          break;
        }
        default: {
          str[i] = '0';
        }
      }
    }
  }

  cout << str << endl;

  return 0;
}