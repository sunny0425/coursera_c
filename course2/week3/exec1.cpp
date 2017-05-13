#include <iostream>
using namespace std;

int overturn(char word[50]){
  for(int i = 0; word[i] != '\0'; i++){
    cout << word[i];
  }
  // cout << ' ';
  return 0;
}

int main(){
  char str[500];
  char word[50];
  cin.getline(str, 500);
  int j = 0;
  for(int i = 0; str[i] != '\0'; i++){
    cout << str[i];
    if(str[i] != ' '){
      cout << j;
      word[j] = str[i];
      j++;
      // cout << word[j];
    } else {
      word[j+1] = '\0';
      overturn(word);

      j = 0;
    }
  }

  return 0;
}
