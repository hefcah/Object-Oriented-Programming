#include<iostream>
using namespace std;

int main() 
{
	int count=0;
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Create a 2D dynamic array
    int** Arr = new int*[rows];
    for (int i = 0; i < rows; i++) 
	{
        Arr[i] = new int[cols];
    }
    for (int i = 0; i < rows; i++)
	{
        for (int j = 0; j < cols; j++)
		{
            cin >> Arr[i][j];
        }
    }

    cout << "Entered 2D Array is:" << endl;
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++)
		{
            cout << Arr[i][j];
            
            }
        }
        cout << endl;
    }
    if ((i<j)&&(Arr[i][j]>Arr[j][i]))
    {
    	count++
	}
	cout<<"No of inversions are "<<count<<endl;
    for (int i = 0; i < rows; i++) 
	{
        delete[] Arr[i];
    }
    delete[] Arr;

    return 0;
}

