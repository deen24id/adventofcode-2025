#ifndef ADVENTOFCODE_2025_UTILS_H
#define ADVENTOFCODE_2025_UTILS_H
#include <fstream>
#include <iosfwd>
#include <iostream>
#include <vector>

#endif //ADVENTOFCODE_2025_UTILS_H

using namespace std;

namespace Utils {
    inline vector<string> readVectorString(const string &filename) {
        vector<string> result;
        ifstream f(filename);

        if (!f.is_open()) {
            cerr << "Error opening the file!";
            throw runtime_error("Error opening the file!");
        }

        string s;

        while (getline(f, s))
            result.push_back(s);

        f.close();

        return result;
    }

    inline int run() {

        // Open the text file named
        // "textFile.txt"
        ifstream f("Day01-input.txt");

        // Check if the file is
        // successfully opened
        if (!f.is_open()) {
            cerr << "Error opening the file!";
            return 1;
        }
        string s;

        // Read each line of the file, store
        // it in string s and print it to the
        // standard output stream
        while (getline(f, s))
            cout << s << endl;

        // Close the file
        f.close();
        return 0;

    }
}