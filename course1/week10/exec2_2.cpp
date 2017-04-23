#include <iostream>
#include <cctype>
using namespace std;

int main(){
  char s1[80];
  char s2[80];
  char result = '=';

  cin.getline(s1, 80);
  cin.getline(s2, 80);

  for(int i = 0; i < 80; i++){
    if(s1[i] == '\0' && s2[i] == '\0'){
      result = '=';
      break;
    } else if (s1[i] == '\0') {
      result = '<';
      break;
    } else if(s2[i] == '\0'){
      result = '>';
      break;
    }

    if(tolower(s1[i]) < tolower(s2[i])){
      result = '<';
      break;
    } else if(tolower(s1[i]) > tolower(s2[i])){
      result = '>';
      break;
    } else {
      result = '=';
      continue;
    }
  }
  cout << result << endl;


  return 0;
}