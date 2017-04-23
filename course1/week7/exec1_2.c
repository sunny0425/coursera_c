#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int sumn = 0, sumd = 1;
  while(n--){
    int num, deno;
    char slash;
    cin >> num >> slash >> deno;
    sumn = sumn*deno + num*sumd;
    sumd = sumd*deno;
  }
  // 后约分
  // 先求最大公约数gcd, 这里用欧几里得法
  int a = sumd, b = sumn, c;
  while(a != 0){
    c = a; a = b%a; b = c;
  }
  int gcd = b;
  // 分子分母同时除以gcd就可以完成约分
  sumd /= gcd;
  sumn /= gcd;
  if(sumd > 1){
    cout << sumn << '/' << sumd << endl;
  } else {
    cout << sumn << endl;
  }
  return 0;
}