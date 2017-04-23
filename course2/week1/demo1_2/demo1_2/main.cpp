//
//  main.cpp
//  demo1_2
//
//  Created by luoping on 2017/4/24.
//  Copyright © 2017年 luoping. All rights reserved.
//

#include <iostream>
using namespace std;

float max(float a, float b){
    if(a>b)
        return a;
    else
        return b;
}

int main() {
    int m = 3, n = 4;
    float result = 0;
    result = max(m, n);
    cout << result;
    return 0;
}
