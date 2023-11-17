#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int n = -365648;
    int ans = 0;

    bool neg = false;
    if (n < 0){
        neg = true;
        n = -n;
    }

    while (n > 0){
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }

    int final = neg ? -ans : ans;
    cout << final;
}
