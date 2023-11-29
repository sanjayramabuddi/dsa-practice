#include <iostream>
#include <limits.h>
using namespace std;

int main() {
  int arr[] = {50, 84, 50, 489, 9, 5, 948, 1, 5, 2, 15, 65, 4, 47, 5, 48};
  int size = sizeof(arr)/sizeof(int);
  int min = INT_MAX;
  int max = INT_MIN;

  for(int i = 0; i < size; i++) {
    if(arr[i] <  min) {
      min = arr[i];
    }
    else if(arr[i] > max){
      max = arr[i];
    }
  }   
   cout << "minimum number is " << min << endl;
   cout << "maximum number is " << max << endl;
}