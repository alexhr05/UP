#include <iostream>

using namespace std;

const int maxSizeText = 1024;

int strLen(char* str) {
    int count = 0;
    cout << "Minava strLen" << endl;
    while (*str != '\0') {
        count++;
        str++;
    }

    return count;
}

void subStringStr(char* text, char* result, int beg, int end) {
    int textLen = strLen(text);
    cout << "Minava subString"<<endl;
    if (text == nullptr || result == nullptr || beg<0 || beg > textLen || end> textLen) {
        *result = '\0';
        return;
    }
    cout << "text=" << text<<endl;

    int counter = 0;
    for (int i = beg; i <= end; i++) {
        result[counter++] = text[i];
    }
    
    
    result[counter] = '\0';
}

int main()
{
    int beg;
    int end;
    char text[maxSizeText];
    char result[maxSizeText];

    cout << "Enter symbols:";
    cin.getline(text, maxSizeText);

    cout << "Enter beg:";
    cin >> beg;
    cout << "Enter end:";
    cin >> end;
    
    subStringStr(text,result,beg,end);

    cout << "result=" << result;
}


