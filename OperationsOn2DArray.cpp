#include<iostream>
using namespace std;
	void CheckEqualSumArrays(int **A1, int **A2, int **A3);
	void CheckDifferentArrays(int **A1, int **A2, int **A3);
	void CheckEqualArrays(int **A1, int **A2, int **A3); 
	void FindSameRows(int **A1, int **A2, int **A3);
	void RotateArrays(int **A1, int **A2, int **A3);
int main()
{ 
	int rows,cols;
	cout<<"enter number of rows"<<endl;
	cin>>rows;
	cout<<"enter number of cols"<<endl;
	cin>>cols;
	int **A1=new int*[rows];
	int **A2=new int*[rows];
	int **A3=new int*[rows];
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
		A1[i]=new int[cols];
		A2[i]=new int[cols];
		A3[i]=new int[cols];
		}
	}
	cout<<"Enter the elements of Array One"<<endl;
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
		cin>>A1[i][j];
		}
	}
	cout<<"Enter the elements of Array Two"<<endl;
for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
		cin>>A2[i][j];
		}
	}
	cout<<"Enter the elements of Array Three"<<endl;
for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
		cin>>A3[i][j];
		}
	}
CheckEqualSumArrays(A1,A2,A3);
CheckDifferentArrays(A1,A2,A3);
CheckEqualArrays(A1,A2,A3);
RotateArrays(A1,A2,A3);
cout<<"Elements of first array"<<endl;
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
		cout<<A1[i][j]<<" ";
		}
	cout<<endl;
	}
cout<<"Elements of second array"<<endl;
for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
		cout<<A2[i][j]<<" ";
		}
	cout<<endl;
	}
cout<<"Elements of third array"<<endl;
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
		cout<<A3[i][j]<<" ";
		}
	cout<<endl;
	}
}


void CheckEqualSumArrays(int **A1, int **A2, int **A3)
{
	int rows = sizeof(A1) / sizeof(A1[0]);
    int cols = sizeof(A1[0]) / sizeof(int);
	int check=0;
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
			if ((A1[i][j]+A2[i][j])==A3[i][j])
			{
				continue;
			}
			else 
			{
				check=1;
			}
		}
	}
	if (check==0)
	{
		cout<<"Sum of two arrays is equal to third array"<<endl;
	}
	else 
	{
		cout<<"Sum of two arrays is not equal to third array"<<endl;
	}
}


void CheckDifferentArrays(int **A1, int **A2, int **A3)
{
	int rows = sizeof(A1) / sizeof(A1[0]);
    int cols = sizeof(A1[0]) / sizeof(int);
	int check=0;
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
			if ((A1[i][j]-A2[i][j])==A3[i][j])
			{
				continue;
			}
			else 
			{
				check=1;
			}
		}
	}
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
			if ((A2[i][j]-A1[i][j])==A3[i][j])
			{
				continue;
			}
			else 
			{
				check=2;
			}
		}
	}
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
			if ((A3[i][j]-A1[i][j])==A2[i][j])
			{
				continue;
			}
			else 
			{
				check=2;
			}
		}
	}
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
			if ((A1[i][j]-A3[i][j])==A2[i][j])
			{
				continue;
			}
			else 
			{
				check=2;
			}
		}
	}
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
			if ((A2[i][j]-A3[i][j])==A1[i][j])
			{
				continue;
			}
			else 
			{
				check=2;
			}
		}
	}
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
			if ((A3[i][j]-A2[i][j])==A1[i][j])
			{
				continue;
			}
			else 
			{
				check=2;
			}
		}
	}
	if (check==0)
	{
		cout<<"Difference of two arrays is equal to third array"<<endl;
	}
	else if(check==1||check==2)
	{
		cout<<"Difference of two arrays is not equal to third array"<<endl;
	}
}


void CheckEqualArrays(int **A1, int **A2, int **A3)
{
	int rows = sizeof(A1) / sizeof(A1[0]);
    int cols = sizeof(A1[0]) / sizeof(int);
int check=0;	
for (int i=0;i<rows;i++)
{
	for (int j=0;j<cols;j++)
	{
		if (A1[i][j]==A2[i][j])
		{
			continue;
		}
		else
		{
			check=1;
		}
	}
}
for (int i=0;i<rows;i++)
{
	for (int j=0;j<cols;j++)
	{
		if (A2[i][j]==A3[i][j])
		{
			continue;
		}
		else
		{
			check=2;
		}
	}
}
for (int i=0;i<rows;i++)
{
	for (int j=0;j<cols;j++)
	{
		if (A1[i][j]==A3[i][j])
		{
			continue;
		}
		else
		{
			check=3;
		}
	}
}
if (check!=1)
{
	cout<<"Array 1 and Array 2 are equal"<<endl;
}
if (check!=2)
{
	cout<<"Array 2 and Array 3 are equal"<<endl;
}
if (check!=3)
{
	cout<<"Array 3 and Array 1 are equal"<<endl;
}
 
}

void FindSameRows(int **A1, int **A2, int **A3)
{
	int rows = sizeof(A1) / sizeof(A1[0]);
    int cols = sizeof(A1[0]) / sizeof(int);
int check=0;	
    for (int i = 0; i < rows; i++) 
	{
        bool check =1;
        for (int j = 0; j < cols; j++) {
            if (A1[i][j] != A2[i][j]) {
                check= 0;
                break;
            }
        }
        
        if (check==1) 
		{
            check= 1;
            cout << "Row " << i << " is the same in A1, A2" << endl;
        }
    }

    if (check==0) 
	{
        cout << "No rows are the same in A1, A2" << endl;
    }
}

void RotateArrays(int **A1, int **A2, int **A3)
{
	int rows = sizeof(A1) / sizeof(A1[0]);
    int cols = sizeof(A1[0]) / sizeof(int);
	int** tempA1 = new int*[cols];
    int** tempA2 = new int*[cols];
    int** tempA3 = new int*[cols];

    for (int i = 0; i < cols; i++) {
        tempA1[i] = new int[rows];
        tempA2[i] = new int[rows];
        tempA3[i] = new int[rows];
    }

    // Rotate A1
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            tempA1[j][rows - 1 - i] = A1[i][j];
        }
    }

    // Rotate A2
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            tempA2[j][rows - 1 - i] = A2[i][j];
        }
    }

    // Rotate A3
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            tempA3[j][rows - 1 - i] = A3[i][j];
        }
    }
    
cout<<"Elements of first Temp array"<<endl;
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
		cout<<A1[i][j]<<" ";
		}
	cout<<endl;
	}
cout<<"Elements of second Temp array"<<endl;
for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
		cout<<A2[i][j]<<" ";
		}
	cout<<endl;
	}
cout<<"Elements of third Temp array"<<endl;
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<cols;j++)
		{
		cout<<A3[i][j]<<" ";
		}
	cout<<endl;
	}
	
}