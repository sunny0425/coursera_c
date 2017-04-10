#include <iostream>
using namespace std;

int main(){
  int score;
  cin >> score;
  switch(score){
    case 95 ... 100:
      cout << 1 << endl;
      break;
    case 90 ... 94:
      cout << 2 << endl;
      break;
    case 85 ... 89:
      cout << 3 << endl;
      break;
    case 80 ... 84:
      cout << 4 << endl;
      break;
    case 70 ... 79:
      cout << 5 << endl;
      break;
    case 60 ... 69:
      cout << 6 << endl;
      break;
    default:
      cout << 7 << endl;
      break;
  }


  return 0;
}

