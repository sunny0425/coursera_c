#include <iostream>
#include <cstring>
using namespace std;
int main(){
  char str[20] = "";
  char substr[3];
  char max;
  int max_index;
  int len;

  while(cin >> str ){
    // cout << str << endl;
    cin >> substr;
    // cout << substr << endl;

    max = str[0];
    max_index = 0;
    len = strlen(str);
    // cout << len;

    str[len] = ' ';
    for(int i = 1; i < len; i++){
      if(str[i] > max){
        max = str[i];
        max_index = i;
      } 
    }
    // cout << max << ' ' << max_index << endl;

    for(int j = len-1; j > max_index; j--){
      str[j+3] = str[j];
    }
    // cout << str << endl;
    for(int k = 0; k < 3; k++){
      // cout << max_index + 1 + k << ':' << substr[k] << ' ';
      str[max_index+1+k] = substr[k];
    }
    str[len+3] = '\0';
    cout << str << endl;
  }
  return 0;
}