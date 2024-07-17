//
//  types.cpp
//
//  Created by NicolasCardozo on 17/07/24.
//  Copyright © 2024 NicolasCardozo. All rights reserved.
//

#include <stdio.h>
#include <iostream>


const int two = 2;
#define PI 3.14159

using namespace std;

double area() {
    int r;
    cin >> r;
    auto area = two * PI * r;
    
    return area;
}

int main() {
    
    double a = area();
    cout << a << endl;
    return 0;
}


