#include <iostream>
using namespace std;
int main() 
{
    int sumEven = 0;
    int sumOdd = 0;
    int** sumArray = new int*[3]; // Declare a pointer to an array of pointers
    cout << "Enter the values for the Array" << endl;
    for (int i = 0; i < 3; i++) {
        sumArray[i] = new int[3]; // Allocate memory for each row
        for (int j = 0; j < 3; j++) 
		{
            cin >> sumArray[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
	{
        for (int j = 0; j < 3; j++)
		{
            if (sumArray[i][j] % 2 == 0) 
			{
                sumEven += sumArray[i][j];
            } else {
                sumOdd += sumArray[i][j];
            }
        }
    }

    cout << "Sum of Even Entries of Entered Array " << sumEven << endl;
    cout << "Sum of Odd Entries of Entered Array " << sumOdd << endl;

    // Deallocate memory
    for (int i = 0; i < 3; i++) {
        delete[] sumArray[i];
    }
    delete[] sumArray;

    return 0;
}

