//
//  main.cpp
//  demo1_3
//
//  Created by luoping on 2017/4/24.
//  Copyright © 2017年 luoping. All rights reserved.
//

#include <iostream>
using namespace std;
int get_int(){
    int n = 0;
    cout << "Please input an integer:";
    cin >> n;
    return n;
}

int main() {
    int result = 0;
    result = get_int();
    cout << result;
    return 0;
}
