#include <iostream>
#include <cstring>
using namespace std;
char str2[100];

void func(char str1[], int x, int y){
  char a = str1[x];
  char b = str1[y];

  if(str2[x] == '0' || str2[x] == '$' || str2[x] == '?'){
    if( x != 0){
      x = x - 1;
      func(str1, x, y);
    } else {
      x = y;
      y = x + 1;
      func(str1, x, y);
    }
  } else {
    if(b == '\0'){
      if( a == '('){
        str2[x] = '?';
      }
      if( x == 0)
        return;
      else {
        x = x -1;
        return func(str1, x, y);
      }
    }


    str2[x] = a;
    str2[y] = b;
    // cout << str2[x] << str2[y] << endl;
    if( a == ')'){
      str2[x] = '$';
      x = x + 1;
      y = x + 1;
      func(str1, x, y);
    } else if ( a == '('){
      if( b == ')'){
        str2[x] = '0';
        str2[y] = '0';
        x = x - 1;
        y = y + 1;
        func(str1, x, y);
      } else if( b == '('){
        x = y;
        y = x + 1;
        func(str1, x, y);
      } else {
        str2[y] = '0';
        y = y + 1;
        func(str1, x, y);
      }
    } else {
      if( b == ')'){
        str2[y] = '$';
        x = y + 1;
        y = x + 1;
        func(str1, x, y);
      } else {
        str2[x] = '0';
        x = x + 1;
        y = x + 1;
        func(str1, x, y);
      }
      
    }
  }
}

int main(){
  char str1[100];

  int x = 0;
  int y;
  y = x + 1;

  // int len1;
  int len2;

  cin.getline(str1, 99);
  func(str1, x, y);

  cout << str1 << endl;
  len2 = strlen(str2);
  cout << len2 << endl;
  // for(int i = 0; i < len1; i++){

  //   cout << str2[i];
  //   if(str2[i] == '\0'){
  //     if( str2[i] == '('){
  //       str2[i] = '$';
  //     } else if (str2[i] == '('){
  //       str2[i] = '?';
  //     }
  //   }
  // }

  cout << str2 << endl;
  // cout << strlen(str2) << endl;

  return 0;
}