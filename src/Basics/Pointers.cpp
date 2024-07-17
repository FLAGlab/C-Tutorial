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

void refIncrement(int* ptr) {
    (*ptr)++;
}

void valueIncremet(int &a) {
    a++;
}

int main () {
    int a=3;
    int *ptr_a = &a;
    cout << "Pointer to a " << a << endl;
    cout << "a's address " << ptr_a << endl;
    refIncrement(ptr_a);
    cout << "The value of a is: " << a << endl;
    valueIncremet(a);
    cout << "The value of a is: " << a << endl;
    int arr[10];
    int *ptr1 = arr;  //pointing to arr[0]
    ptr1++;   //pointing to arr[1]
    return 0;
}
