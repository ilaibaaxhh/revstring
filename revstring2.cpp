#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[10]="world", rev[10];
    int i, j, count = 0;
    
    
    
    cout << "String Before Reverse: " << str;
    
    // finding the length of the string
    
    while(str[count] != '\0'){
        count++;
    }
    
    j = count - 1;
    
    // Storing the array to another array
    for (i = 0; i <= count; i++) {
        rev[i] = str[j];
        
        j--;
    }
    
    cout << "\nString After Reverse: " << rev;
    return 0;
}
