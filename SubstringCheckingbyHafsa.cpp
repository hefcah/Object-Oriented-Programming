#include<iostream>
#include<string>
using namespace std;

bool CheckSubsequent(char *str1, char *str2, int i, int j);
int main()
{
    char str1[25];
    char str2[25];
    cout << "Enter String 1: ";
    cin >> str1;
    cout << "Enter String 2: ";
    cin >> str2;
    bool result = CheckSubsequent(str1, str2, 0, 0);
    if (result)
    {
        cout << "String 2 is a substring of String 1." << endl;
    }
    else
    {
        cout << "String 2 is NOT a substring of String 1." << endl;
    }

    return 0;
}
bool CheckSubsequent(char *str1, char *str2, int i, int j)
{
    if (str2[j] == '\0')
    {
        return true;
    }

    if (str1[i] == '\0')
    {
        return false;
    }
    if (str1[i] == str2[j])
    {
        return CheckSubsequent(str1, str2, i + 1, j + 1);
    }
    else
    {
        return CheckSubsequent(str1, str2, i - j + 1, 0);
    }
}
