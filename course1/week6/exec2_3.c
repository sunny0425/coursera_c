#include <iostream>
using namespace std;

int main(){
  int n;
  int score[100];
  int max = 0;

  cin >> n;
  for( int i = 0; i < n; i++){
    cin >> score[i];
    if(score[i] > max){
      max = score[i];
    }
  }
  cout << max << endl;
  return 0;
}