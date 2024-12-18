// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

const int maxSize = 100;

int strLen(char* str) {
    int counter = 0;

    while (*str != '\0') {
        counter++;
        str++;
    }

    return counter;
}
char* censor(char* str) {
    int strLength = strLen(str);
    for (int i = 0; i < strLength; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            str[i] = '*';
        }
    }

    return str;
}


int main() {
    
    char* str = new char[maxSize];

    cout << "Enter string:";
    cin.getline(str, maxSize);
    cout << censor(str);

    delete[] str;
    return 0;
}
