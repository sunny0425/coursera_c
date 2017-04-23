#include <iostream>
using namespace std;
int succedent[300]; // 这个数组用户保存一个猴子的后一位是谁
int precedent[300]; // 保存一个猴子的前一位是谁

int main(){
  int n, m, i;
  while(true){
    cin >> n >> m;
    if(n == 0 && m == 0)
      break;
    for(int i = 0; i < n - 1; i++){
      succedent[i] = i + 1;
      precedent[i + 1] = i;
    }
    succedent[n - 1] = 0;
    precedent[0] = n - 1;

    int current = 0;
    while(true){
      // 如果一个要报m次号，则去m-1次succedent之后就是需要退出的那只猴子
      for(int count = 0; count < m - 1; count++)
        current = succedent[current];

      int pre = precedent[current];
      int suc = succedent[current];
      succedent[pre] = suc;
      precedent[suc] = pre;
      if(pre == suc){
        cout << pre+1 << endl;
        break;
      }
      current = suc;
    }
  }
  
  

  return 0;
}