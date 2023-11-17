#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int n = 10111;
    int k = 2;
    int shift = 1 << k;
    int ans = n | shift;
    cout << ans;
    // Else
    // return n | (1<<k);
}