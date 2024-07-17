//
//  classes2.cpp
//
//  Created by NicolasCardozo on 17/07/24.
//  Copyright © 2024 NicolasCardozo. All rights reserved.
//

#include "classes2.hpp"

Pair::Pair(int x, int y) {
    fst = x;
    scd = y;
}

int Pair::first() {
    return fst;
}

int Pair::second() {
    return scd;
}
