#include <iostream>
using namespace std;
int main(){
  int n; // 年薪
  int k; // 房子价格增长百分比
  float house; // 房价
  int salary; // m年后总薪资（存款）
  int year;

  while(cin >> n >> k){
    house = 200;
    for(year = 1; year <= 20; year++){
      salary = n * year;
      if(salary >= house){
        break;
      }
      // cout << year << ' '<< house << ' ' << salary << '\n' << endl;
      house = house * (1 + k/100.0);
    }

    if(year == 21){
      cout << "Impossible" << endl;
    } else {
      cout << year << endl;
    }
  }
  return 0;
}