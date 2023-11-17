#include <iostream>
#include <string.h>
using namespace std;

int palindrome(char sentence[])
{
    int i = 0;
    int j = strlen(sentence) - 1;

    while (i <= j)
    {
        if (sentence[i] != sentence[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    char sentence[100];
    cin >> sentence;
    cout << "Check palindrome - " << palindrome(sentence);
    //   cout << "After changing - " << sentence;
}