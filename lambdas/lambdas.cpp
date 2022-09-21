// lambdas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Table.hpp"
#include <sstream>      // std::stringstream

//init values 
table romans({ 1,5,10 }, { 'I', 'V', 'X' });

std::stringstream roman_count(int num) {
    //num is end of loop
    //add vals to stream
    std::stringstream ret;
    for (int y = 0; y < romans.size; y++) {
        //find best fit
        for (int x = 0; x<(num == romans.vals[y] ? romans.vals[y] : num == romans.vals[y]-1 ? romans.vals[y] : num< romans.vals[y] ? 0:0); x++) {
            
            
            for (int temp = 0; temp < num / romans.vals[y]; temp++) {
                ret << romans.c_vals[y];
            }
            num -= romans.vals[y];
        }
    }

    return ret;


}


int main()
{
    std::cout << "Hello Roman Increment!\n";
    std::cout << roman_count(11).str();


}


