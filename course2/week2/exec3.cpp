#include <iostream>
#include <iomanip>
using namespace std;

int fetch(char arr[], int len, char value){
  for(int i = 0; i < len; i++){
    if(arr[i]  == value){
      return i;
    }
  }
  return -1;
}

int main(){
  char categories[] = "ABC";
  int staffs[3] = {1, 2, 3};
  double total_of_staffs[3] = {0, 0, 0};
  double total_of_categories[3] = {0, 0, 0};

  int num, id, index, line = 0;
  double amount;
  char category;
  for(int line = 0; line < 3; line ++){
    cin >> id;
    cin >> num;
    for(int i = 0; i < num; i++){
      cin >> category;
      cin >> amount;
      index = fetch(categories, num, category);
      total_of_categories[index] += amount;
      total_of_staffs[id-1] += amount;
    }
  }
  
  for(int i = 0; i < 3; i++){
    cout << staffs[i] << ' ' << fixed << setprecision(2) << total_of_staffs[i] << endl;
  }

  for(int i = 0; i < 3; i++){
    cout << categories[i] << ' ' << fixed << setprecision(2) << total_of_categories[i] << endl;
  }

  return 0;
}