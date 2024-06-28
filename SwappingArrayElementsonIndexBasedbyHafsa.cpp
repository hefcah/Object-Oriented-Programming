#include <iostream>
#include <string>
using namespace std;
void ChangeLocationRecursive(char *Array, int indice2, int indice6, int currentIndex);
int main() 
{
    char charArray[] = {'P', 'A', 'K', 'I', 'S', 'T', 'A', 'N'};
    int indice2 = 2;
    int indice6 = 6;
    int size = sizeof(charArray) - 1;
    ChangeLocationRecursive(charArray, indice2, indice6, 0);
    cout << "Final Output is " << endl;
    for (int i = 0; i < 8; i++) {
        cout << charArray[i];
    }
    cout << endl;
    return 0;
}
void ChangeLocationRecursive(char *Array, int indice2, int indice6, int currentIndex) {
    if (currentIndex == 8) {
        return; 
    }
    if (currentIndex == indice2) {
        char temp = Array[indice2];
        Array[indice2] = Array[indice6];
        Array[indice6] = temp;
    }
    cout << "Character at index " << currentIndex << " is " << Array[currentIndex] << endl;
    ChangeLocationRecursive(Array, indice2, indice6, currentIndex + 1);
}

