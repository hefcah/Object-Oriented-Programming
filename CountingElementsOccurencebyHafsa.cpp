#include<iostream>
using namespace std;
//void findOccurences(int *A,int i);
int main()
{
	int size;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	int *A=new int[size];
	for (int i=0;i<size;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<size;i++)
	{
	cout<<"Entered Array is "<<A[i]<<endl;
}
}
void findOccurences(int *A,int i)
{
	int count=0;
	for(int j=0;j<i;j++)
	{
		for(int k=0;k<i;k++)
		{
			if(j==k)
			continue;
			else
			{
				if(A[i]==A[j])
				count++;
			}
		}
	}
	cout<<"occurence is"<<count<<endl;
}
