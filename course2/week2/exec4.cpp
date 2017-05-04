#include <iostream>
#include <iomanip>
using namespace std;

bool IsLeap(int year){
  if(year % 4 == 0 && year % 100 != 0){
    return true;
  } else if(year % 400 == 0){
    return true;
  }
  return false;
}

bool IsLastDayOfMonth(int year, int month, int day){
  switch(month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: {
      if( day >= 31) return true;
      return false;
    }
    case 2: {
      if( IsLeap(year) ){
        if( day >= 29) return true;
      } else {
        if( day >= 28) return true;
      }
      return false;
    }
    default: {
      if( day >= 30) return true;
      return false;
    }
  }
}

int main(){
  char year[5], month[3], day[3];

  cin.getline(year, 5, '-');
  cin.getline(month, 3, '-');
  cin.getline(day, 3, '-');

  int iyear = atoi(year);
  int imonth = atoi(month);
  int iday = atoi(day);

  if(IsLastDayOfMonth(iyear, imonth, iday)){
    if(imonth == 12){
      iyear += 1;
      imonth = 1;
      iday = 1;
    } else {
      imonth += 1;
      iday = 1;
    }
  } else {
    iday += 1;
  }
  cout << iyear << '-';
  cout << setfill('0') << setw(2);
  cout << imonth << '-';
  cout << setfill('0') << setw(2); 
  cout << iday << endl;
  return 0;
}