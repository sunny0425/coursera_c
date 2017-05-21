#include <iostream>
#include <cstring>
using namespace std;
char str[102];

int findRight(int x){
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
        str[x] = ' ';
        return findRight(y+1);
      }
    }
    case ')': {
      str[x] = ' ';
      return x;
    }
    case ' ': {
      return findRight(x+1);
    }
    default: {
      str[x] = ' ';
      return findRight(x+1);
    }

  }
}

int main(){
  int len;
  while(cin.getline(str, 101)){
    cout << str << endl;
    len = strlen(str);

    for(int i = 0; i < len; i++){
      if(str[i] == ' ' || str[i] == '?' || str[i] == '$'){
        continue;
      } else {
        switch(str[i]){
          case '(': {
            if(findRight(i+1) != -1){
              str[i] = ' ';
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
            str[i] = ' ';
          }
        }
      }
    }

    cout << str << endl;
  }
  
  return 0;
}