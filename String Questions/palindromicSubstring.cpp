#include <iostream>
#include <string.h>
using namespace std;

int expandIndex(string s, int left, int right)
{
    int count = 0;

    while (left >= 0 && right < s.length() && s[left] == s[right])
    {
        count++;
        left--;
        right++;
    }
    return count;
}
int countSubstrings(string s)
{
    int totalCount = 0;
    int size = s.length();

    for (int i = 0; i < size; i++)
    {
        int oddAns = expandIndex(s, i, i);
        totalCount = oddAns + totalCount;

        int evenAns = expandIndex(s, i, i + 1);
        totalCount = evenAns + totalCount;
    }

    return totalCount;
}