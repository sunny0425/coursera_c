#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int n;
  cin >> n;
  int ages[n];
  int i;
  float nums[4];
  for(i = 0; i < 4; i++){
    nums[i] = 0;
  }
  float average;
  for(i = 0; i < n; i++){
    cin >> ages[i];
    switch(ages[i]){
      case 0 ... 18:
        nums[0] += 1;
        break;
      case 19 ... 35:
        nums[1] += 1;
        break;
      case 36 ... 60:
        nums[2] += 1;
        break;
      default:
        nums[3] += 1;
        break;
    }
  }
  string txt[4];
  txt[0] = "1-18: ";
  txt[1] = "19-35: ";
  txt[2] = "36-60: ";
  txt[3] = "60-: ";

  for(i = 0; i < 4; i++){
    average = nums[i] / n * 100;
    cout << txt[i] << fixed << setprecision(2) << average << '%' << endl;
  }
  return 0;
}


