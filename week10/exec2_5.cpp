#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int arr[100][100];
  int n, num = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> arr[i][j];
    }
  }

  for(int i = 1; i < n-1; i++){
    for(int j = 1; j < n-1; j++){
      if(abs(arr[i][j] - arr[i][j+1]) < 50){
        continue;
      }
      if(abs(arr[i][j] - arr[i][j-1]) < 50){
        continue;
      }
      if(abs(arr[i][j] - arr[i-1][j]) < 50){
        continue;
      }
      if(abs(arr[i][j] - arr[i+1][j]) < 50){
        continue;
      }
      ++num;
    }
  }
  cout << num << endl;

  return 0;
}