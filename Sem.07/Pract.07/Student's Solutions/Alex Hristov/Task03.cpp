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

void replaceOddEvenX(char* text, char x, char a, char b) {
    int textLen = strLen(text);
    
    if (text == nullptr  || x<0 || a<0 || b < 0) {
        
        return;
    }
    cout << "Minava prezSubString"<<endl;
    int counterForX = 0;
    char* buff = text;
   
    while (*text != '\0') {
        if (*text == x) {

            counterForX++;
            cout << "counterForX=" << counterForX << endl;
            if (counterForX %2==0) {
                
                *text = b;
                cout << "EVEN *text=" << *text << endl;
                cout << "*text=" << text << endl;
            }
            else {
                *text = a;
                cout << "ODD *text=" << *text << endl;
                cout << "*text=" << text << endl;
            }
        }
        text++;
    }
    text = buff;
   
}

int main()
{
    char x, a ,b;
    
    char text[maxSizeText];
    char result[maxSizeText];

    cout << "Enter symbols:";
    cin.getline(text, maxSizeText);

    cout << "Enter x:";
    cin >> x;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    replaceOddEvenX(text,  x, a, b);

    cout << "text=" << text;
}


