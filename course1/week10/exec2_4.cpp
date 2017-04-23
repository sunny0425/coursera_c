#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int arr[5][5];
  int m, n;
  int tmp;

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      cin >> arr[i][j];
    }
  }

  cin >> m >> n;
  if(n < 0 || n > 4 || m < 0 || m > 4){
    cout << "error" << endl;
  } else {
    if(m != n){
      for(int i = 0; i < 5; i++){
        tmp = arr[m][i];
        arr[m][i] = arr[n][i];
        arr[n][i] = tmp;
      }
    }

    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
        cout << setw(4) << arr[i][j];
      }
      cout << endl;
    }
  }

  return 0;
}