//
//  EvenFibNumbers.cpp
//  PROJECT E
//
//  Created by Mac on 2/15/17.
//  Copyright © 2017 KJB Apps LLC. All rights reserved.
//

#include <iostream>
using namespace std;

void evenFibNumbers(int n) {
    
    int prev = 0, cur = 1;
    int evenSum = 0;
    
    while(cur < n){
        if((prev+cur) % 2 == 0){
            evenSum += prev+cur;
        }
        int nxt = cur + prev;
        prev = cur;
        cur = nxt;
    }
    cout << evenSum;
}
