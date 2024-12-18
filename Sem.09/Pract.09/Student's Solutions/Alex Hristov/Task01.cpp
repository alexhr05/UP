// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

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
    char* buff = new char[strLength + 1];

    for (int i = 0; i < strLength; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            buff[i] = '*';
        }
        else {
            buff[i] = str[i];
        }
    }

    buff[strLength] = '\0';

    return buff;
}


int main() {
    
    char str[MAX_SIZE];

    cout << "Enter string:";
    cin.getline(str, MAX_SIZE);
    char* result = censor(str);
    
    cout << result;

    delete[] result;
    return 0;
}
