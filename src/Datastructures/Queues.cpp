//
//  Queues.cpp
//  Problems
//
//  Created by NicolasCardozo on 17/07/24.
//  Copyright © 2024 NicolasCardozo. All rights reserved.
//

#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<double> q;
    q.push(3.5);
    q.push(1.0);
    cout << q.front();
    cout << q.size();
    q.pop();
    cout << q.size();
    return 0;
}
