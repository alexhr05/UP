// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

char* censor(char* str, int size){
    
    for(int i = 0; i < size; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            str[i] = '*';
        }
    }
    
    
    return str;
} 

int main() {
    int sizeStr = 10;
    char* str[] = new char[sizeStr];

    cout<<censor(str,size);
    return 0;
}
