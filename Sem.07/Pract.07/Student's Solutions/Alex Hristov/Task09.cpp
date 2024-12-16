// UP_Pract_07_Zad_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

const int maxSizeText = 1024;

int strLen(char* str) {
    int count = 0;

    while (*str != '\0') {
        count++;
        str++;
    }

    return count;
}

void  removeRepeatingSymbols(char* text, char* result) {
  
    if (text == nullptr) {

        return;
    }
    
    int counter = 0;
    char* buff = text;
    int asciiSymbols[256] = {0};
    
    while (*buff != '\0') {
        asciiSymbols[(int)*buff]++;
        buff++;
       
    }
    
    for (size_t i = 0; i < 256; i++)
    {
        if (asciiSymbols[i] != 0) {
            result[counter] = i;
            
            counter++;
        }
    }

    result[counter] = '\0';
    

}


int main()
{

    char text[maxSizeText];
    char result[maxSizeText];



    cout << "Enter text:";
    cin.getline(text, maxSizeText);

    removeRepeatingSymbols(text, result);

    cout << "result=" << result;

}


