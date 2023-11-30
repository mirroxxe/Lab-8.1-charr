#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

bool containsAllLetters(const char input[]) {
    const char* target = "while";

    for (size_t i = 0; i < strlen(target); ++i) {
        bool found = false;
        for (size_t j = 0; j < strlen(input); ++j) {
            if (target[i] == input[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

char* replaceWhile(char* input) {
    char* pos = strstr(input, "while");

    while (pos != nullptr) {
        memmove(pos + 2, pos + 5, strlen(pos + 5) + 1);
        memcpy(pos, "**", 2);
        pos = strstr(pos + 2, "while");
    }

    return input;
}

int main() {
    const int max_length = 100;
    char inputString[max_length];

    cout << "Print line: ";
    cin.getline(inputString, max_length);

    if (containsAllLetters(inputString)) {
        cout << "String contains all letters from 'while'.\n";
    }
    else {
        cout << "String doesn`t contain all letters with 'while'.\n";
    }

    char* result = replaceWhile(inputString);

    cout << "Result: " << result << endl;

    delete[] result;

    return 0;
}
