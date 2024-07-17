//
//  Stacks.cpp
//  Problems
//
//  Created by NicolasCardozo on 17/07/24.
//  Copyright © 2024 NicolasCardozo. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    s.push(42);
    cout << s.top();
    cout << s.size();
    s.pop();
    cout << s.size();
    return 0;
}
