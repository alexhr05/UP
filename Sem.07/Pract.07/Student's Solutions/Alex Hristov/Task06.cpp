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

char* replaceOddEvenX(char* text1, char* text2, char* text3) {
    int text1Len = strLen(text1);
    int text2Len = strLen(text2);
    int text3Len = strLen(text3);

    if (text1 == nullptr || text2 == nullptr || text3 == nullptr) {

        return text1;
    }
   
    
    char* ptr1 = text1;
    char* ptr2 = text2;
    char* ptr3 = text3;
    char* commonPrefixEnd = text1;
    
    while (*ptr1 != '\0' && *ptr2 != '\0' && *ptr3 != '\0' && *ptr1 == *ptr2 && *ptr2 == *ptr3) {
        
        *commonPrefixEnd++;
        ptr1++;
        ptr2++;
        ptr3++;
        

    }

    *commonPrefixEnd = '\0';
    
    return text1;
    

}


int main()
{

    char text1[maxSizeText];
    char text2[maxSizeText];
    char text3[maxSizeText];
    

    cout << "Enter text1:";
    cin.getline(text1, maxSizeText);
    cout << "Enter text2:";
    cin.getline(text2, maxSizeText);
    cout << "Enter text3:";
    cin.getline(text3, maxSizeText);

    cout<< replaceOddEvenX(text1, text2, text3);
    
}


