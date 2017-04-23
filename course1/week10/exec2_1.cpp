#include <iostream>
using namespace std;

int main(){
  int counts = 80;
  char s[80];
  int arr[5] = { 0 };

  cin.getline(s, counts);
  for(int i = 0; i < 80; i++){
    switch(s[i]){
      case 'a': {
        arr[0]++;
        break;
      }
      case 'e': {
        arr[1]++;
        break;
      }
      case 'i': {
        arr[2]++;
        break;
      }
      case 'o': {
        arr[3]++;
        break;
      }
      case 'u': {
        arr[4]++;
        break;
      }
    }
    
  }

  for(int i = 0; i < 5; i++){
    cout << arr[i] << ' ';
  }
  cout << endl;

  return 0;
}