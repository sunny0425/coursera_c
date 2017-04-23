//
//  main.cpp
//  demo1_1
//
//  Created by luoping on 2017/4/24.
//  Copyright © 2017年 luoping. All rights reserved.
//

#include <iostream>
using namespace std;
int absolute(int n){
    if(n<0)
        return(-n);
    else
        return n;
}

int main() {
    int m = -123, result = 0;
    result = absolute(m);
    cout << result;
    return 0;
}
