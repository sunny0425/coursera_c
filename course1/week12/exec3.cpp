#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
  int n;
  cin >> n;
  double arr[100][2];
  for(int i = 0; i < n; i++){
    cin >> arr[i][0] >> arr[i][1];
  }

  double max = 0;
  double dis;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i == j) continue;
      dis = pow(fabs(arr[i][0] - arr[j][0]), 2);
      dis += pow(fabs(arr[i][1] - arr[j][1]), 2);
      dis = sqrt(dis);
      if(dis > max) max = dis;
    }
  }

  cout << fixed << setprecision(4) << max << endl;
  return 0;
}