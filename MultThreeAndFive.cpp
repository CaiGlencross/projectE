//
//  MultThreeAndFive.cpp
//  PROJECT E
//
//  Created by Mac on 2/15/17.
//  Copyright © 2017 KJB Apps LLC. All rights reserved.
//

#include <iostream>
using namespace std;

//Find the sum of all the multiples of 3 or 5 below 1000.
void MultOfThreeAndFive(int count){
    int sum = 0;
    for(int i = 0; i < count; i++){
        if( i%3 == 0 || i%5 == 0){
            sum += i;
        }
    }
    cout << sum;
}
