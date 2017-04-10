#include <iostream>
using namespace std;

int main(){
  float distance;
  float unlock_time = 27;
  float lock_time = 23;
  float walk_speed = 1.2;
  float bike_speed = 3.0;
  float walk_time, bike_time;
  int n, i;
  cin >> n;
  for(i = 0; i < n; i++){
    cin >> distance;
    walk_time = distance / walk_speed;
    bike_time = (distance / bike_speed) + unlock_time + lock_time;
    if(walk_time < bike_time)
      cout << "Walk" << endl;
    else if(bike_time < walk_time)
      cout << "Bike" << endl;
    else
      cout << "All" << endl;
  }

  return 0;
}