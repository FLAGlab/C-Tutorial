//
//  structure.cpp
//
//  Created by NicolasCardozo on 17/07/24.
//  Copyright © 2024 NicolasCardozo. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::string s;
    std::cin >> n;
    long long array [n];
    std::vector<long long> v;
    for(int i=0; i<n; i++) {
        std::cin >> array[i];
        v.push_back(array[i]);
    }
    int sum1 = 0, sum2 = 0;
    for(int i=0; i<n; i++) {
        sum1 += array[i];
        sum2 += v[i];
    }
    std::cout << sum1 << " " << sum2 << std::endl;
    return 0;
}