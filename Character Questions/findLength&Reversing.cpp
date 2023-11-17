#include <iostream>
#include <string.h>
using namespace std;

int findLength(char name[]){
    int i = 0;
    int length = 0;

    while (name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

int reversing(char name[]){
    int i = 0;
    int n = strlen(name);
    int j = n - 1;

    while (i <= j){
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

int main(){
    char name[100];
    cin >> name;

    cout << "Length is " << findLength(name) << endl;
    reversing(name);
    cout << "Reversing " << name;
}