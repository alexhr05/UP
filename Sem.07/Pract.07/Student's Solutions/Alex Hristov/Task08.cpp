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

int  replaceOddEvenX(char* text1, char* text2) {
    int text1Len = strLen(text1);
    int text2Len = strLen(text2);

    if (text1 == nullptr || text2 == nullptr) {

        return 0;
    }

    
    while (*text1 && *text2 && *text1 == *text2) {
        text1++;
        text2++;

    }

    if (*text1 - *text2>0) {
        return 1;
    }
    else if (*text1 - *text2 == 0) {
        return 0;
    }
    else {
        return -1;
    }
    
}


int main()
{

    char text1[maxSizeText];
    char text2[maxSizeText];
   


    cout << "Enter text1:";
    cin.getline(text1, maxSizeText);
    cout << "Enter text2:";
    cin.getline(text2, maxSizeText);
   

    cout << replaceOddEvenX(text1, text2);

}


