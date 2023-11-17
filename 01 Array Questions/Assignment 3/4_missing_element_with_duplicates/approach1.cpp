#include <iostream>
using namespace std;

void duplicate(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        int index = abs(arr[i]);
        
        if(arr[index-1] > 0){
            arr[index-1] *= -1;
        }
    }
    
    // for(int i = 0; i < size; i++){
    //     cout << arr[i] << " " <<;
    // }
    
    for(int i = 0; i < size; i++){
        if(arr[i] > 0) {
            cout << i+1 ;
        }
    }
}

int main() {
    int arr[] = {2, 4, 1, 2};
    int size = sizeof(arr)/sizeof(int);
    duplicate(arr, size);
    return 0;
}