#include<iostream>
#include<string>
using namespace std;

void countingUniqueWords(char* string, char*& uwords, int* size);

int main() {
    int size;
    char uwords[100];
    
    cout << "Enter size of string: ";
    cin >> size;
    char stringArray[size];
    cout << "Enter words for string array" << endl;
    for (int i = 0; i < size; i++) {
        cin >> stringArray[i];
    }
    
    // Corrected line with the '&' before uwords
    countingUniqueWords(stringArray, uwords, &size);
    
    return 0;
}

void countingUniqueWords(char* string, char*& uwords, int* size) {
    int count = 0;
    for (int i = 0; i < *size; i++) {
        if (string[i] == ' ' || string[i] == '.') {
            count++;
        }
    }
    cout << "Number of unique words are: " << count << endl;
}

