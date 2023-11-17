#include <iostream>
#include <string.h>
using namespace std;

void uppercase(char name[]){
    int j = strlen(name);
    for (int i = 0; i < j; i++){
        name[i] = name[i] - 'a' + 'A';
    }
}

void lowercase(char name1[]){
    int j = strlen(name1);
    for (int i = 0; i < j; i++){
        name1[i] = name1[i] + 'a' - 'A';
    }
}

int main(){
    char name[100];
    cin >> name;
    uppercase(name);
    cout << "To UpperCase - " << name;

    char name1[100];
    cin >> name1;
    lowercase(name1);
    cout << "To lowercase - " << name1;
}