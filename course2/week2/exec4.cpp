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
  int year, month, day;
  scanf("%d-%d-%d", &year, &month, &day);

  if(IsLastDayOfMonth(year, month, day)){
    if(month == 12){
      year += 1;
      month = 1;
      day = 1;
    } else {
      month += 1;
      day = 1;
    }
  } else {
    day += 1;
  }

  printf("%d-%02d-%02d\n", year, month, day);
  
  return 0;
}