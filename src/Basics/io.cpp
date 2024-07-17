//
//  io.cpp
//
//  Created by NicolasCardozo on 17/07/24.
//  Copyright © 2024 NicolasCardozo. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    cout << n << " " << s << endl;
    
    int m;
    char s2[25];
    scanf("%d%s", &m, s2);
    printf("%s %d\n", s2, m);
    
    return 0;
}

void readFiles() {
    ofstream myfile;
    myfile.open ("example.txt");
    myfile << "Writing this to a file.\n";
    myfile.close();
}
