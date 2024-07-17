//
//  vectors.cpp
//  Problems
//
//  Created by NicolasCardozo on 17/07/24.
//  Copyright © 2024 NicolasCardozo. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1;
    vector<int> v2 (4, 100);
    vector<int> v3 (v2);
    
    v1.push_back(5);
    v1.pop_back();
    
    v2.clear();
    
    cout << v3.size() << endl;
    cout << v1.empty() << endl;
    cout << v2[0] << endl;
}
