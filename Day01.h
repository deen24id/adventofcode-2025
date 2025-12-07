//
// Created by ASUS on 08-Dec-25.
//

#ifndef ADVENTOFCODE_2025_DAY_01_H
#define ADVENTOFCODE_2025_DAY_01_H
#include <iostream>
#include "Utils.h"
#endif //ADVENTOFCODE_2025_DAY_01_H
using namespace std;

namespace Day01 {
    inline void run() {

        const vector<string> out = Utils::readVectorString("Day01-input.txt");

        cout << "{";
        for (string s : out) {
            cout << s << ",";
        }

        cout << "}" << endl;

    }
}