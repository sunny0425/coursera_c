//
//  main.cpp
//  demo1_4
//
//  Created by luoping on 2017/4/24.
//  Copyright © 2017年 luoping. All rights reserved.
//

#include <iostream>
using namespace std;
void delay(int n){
    for(int i = 0; i < n * 100000; i++)
    return;
}
int main() {
    for(int j = 0; j < 100; j++){
        cout << j << endl;
        delay(1000);
    }
    return 0;
}
