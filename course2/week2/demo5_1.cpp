#include <iostream>
using namespace std;

char[] dayOfWeek(int n){

  char names[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  char start[10] = "Saturday";
  int day = n % 7;
  int index = (0 + day) % 7;
  char name[10] = names[index];
  return name;
}

int getYear(){

}

int getMonth(){

}

int getDay(){

}
bool isLeepYear(){

}
int main(){
  // days from 2017-01-01 
  int n;

  while(cin >> n && n != -1){
    cout << dayOfWeek(n) << endl;
  }
}