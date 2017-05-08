#include <iostream>
using namespace std;

int main(){
  int n;
  char arr[100][100];
  cin >> n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> arr[i][j];
    }
  }

  int m;
  cin >> m;
  for(int d = 1; d <= m; d++ ){
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(arr[i][j] == '!'){
          arr[i][j] = '@';
        }
      }
    }

    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(arr[i][j] == '@'){
          if( i != 0 && arr[i-1][j] == '.'){
            arr[i-1][j] = '!';
          }

          if(j != 0 && arr[i][j-1] == '.'){
            arr[i][j-1] = '!';
          }

          if(i != n - 1 && arr[i+1][j] == '.'){
            arr[i+1][j] = '!';
          }

          if(j != n - 1 && arr[i][j+1] == '.'){
            arr[i][j+1] = '!';
          }
        }

      }
    }
  }

  int total = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(arr[i][j] == '@'){
        total++;
      }
    }
  }

  cout << total << endl;
  return 0;
}

