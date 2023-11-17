#include <iostream>
#include <string.h>
using namespace std;

int main() {
  int arr[] = {2, 5, 78, 64, 1, 3, 6, 95, 84, 65, 14, 42, 10};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key = 20;
  int flag = 0;

  for (int i = 0; i < size; i++) {
    if (key == arr[i]) {
      // cout << "Found";
      flag = 1;
      break;
    }
  }
  if (flag) {
    cout << "Found" << endl;
  } else {
    cout << "Not Found" << endl;
  }
}