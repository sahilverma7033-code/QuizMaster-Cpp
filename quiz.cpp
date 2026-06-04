#include <iostream>
using namespace std;

int main() {
    int score = 0;
    int answer;

    cout << "===== C++ Quiz App =====\n\n";

    cout << "1. Who developed C++?\n";
    cout << "1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n";
    cin >> answer;
    if (answer == 2) score++;

    cout << "\n2. Which symbol is used for comments in C++?\n";
    cout << "1. //\n2. ##\n3. <!-- -->\n4. **\n";
    cin >> answer;
    if (answer == 1) score++;

    cout << "\n3. Which loop is guaranteed to run at least once?\n";
    cout << "1. for\n2. while\n3. do-while\n4. none\n";
    cin >> answer;
    if (answer == 3) score++;

    cout << "\nQuiz Finished!\n";
    cout << "Your Score: " << score << "/3\n";

    return 0;
}