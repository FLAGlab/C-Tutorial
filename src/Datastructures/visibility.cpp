//
//  visibility.cpp
//
//  Created by NicolasCardozo on 17/07/24.
//  Copyright © 2024 NicolasCardozo. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

// Base class
class A {
public:
    int x;

protected:
    int y;

private:
    int z;
};

// Derived class
// Class B will inherit Class A using Public Visibility mode
class B : private A {
    int oneMoreX = x + 1;
    int doubley = y*2;
    int squarez = z*z;
};

int main() {
    B b;
    A a;
    
    cout << a.x << endl;
    // x is public and it will remain public
    // so its value will be printed
    cout << b.x << endl;
    
    cout << a.y << endl;
    // y is protected and it will remain protected
    // so it will give visibility error
    cout << b.y << endl;
    
    cout << a.z << endl;
    // z is not accessible from B as
    // z is private and it will remain private
    // so it will give visibility error
    cout << b.z << endl;
};
