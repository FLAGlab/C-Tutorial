//
//  classes1.cpp
//
//  Created by NicolasCardozo on 17/07/24.
//  Copyright © 2024 NicolasCardozo. All rights reserved.
//

class Pair {
private:
    int fst;
    int scd;

public:
   Pair(int x,int y) {
        fst = x;
        scd = y;
      }

    int first() {
        return fst;
    }
    
    int second() {
        return scd;
    }
};
