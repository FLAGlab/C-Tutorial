//
//  Pointers.cpp
//  Problems
//
//  Created by NicolasCardozo on 17/07/24.
//  Copyright © 2024 NicolasCardozo. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

struct myStruct {
    bool flag;
    int age;
    double money;
    myStruct(bool a, int b, double c) {
        flag = a;
        age = b;
        money = c;
    }
};

int main () {
    myStruct *a1 = new myStruct(true, 15, 2.4);
    cout << a1->flag << " " << (*a1).age << endl;
    memset(a1, 0, sizeof(myStruct));
    cout << a1->flag << " " << a1->age << endl;
    
    return 0;
}
