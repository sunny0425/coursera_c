#include <iostream>
using namespace std;

int main(){
  char sentence[500];
  int length = 0 ;
  int max = 0;
  int max_start = 0;
  int start = 0;

  cin.getline(sentence, 500);
  for(int i = 0; i < 500; i++){
    if(sentence[i] == ' ' || sentence[i] == '.' || sentence[i] == '\0'){
      if(max < length){
        max = length;
        max_start = start;
      }
      if(sentence[i] == '.' || sentence[i] == '\0'){
        break;
      }
    } else {
      if(i != 0 && sentence[i-1] == ' '){
        // word start
        start = i;
        length = 0;
      }
      ++length;
    }
  }

  for(int k = max_start; k < max_start + max; k++){
    cout << sentence[k];
  }
  cout << endl;

  return 0;
}