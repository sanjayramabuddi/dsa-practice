#include <iostream>
#include <string.h>
using namespace std;

bool chkpalindrome(string s, int i, int j){
    while (i <= j){
        if (s[i] != s[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

bool validPalindrome(string s){
    int start = 0;
    int end = s.length() - 1;

    while (start <= end){
        if (s[start] != s[end]){
            return chkpalindrome(s, start + 1, end) || chkpalindrome(s, start, end - 1);
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}