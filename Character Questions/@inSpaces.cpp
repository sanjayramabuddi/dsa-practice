#include <iostream>
#include <string.h>
using namespace std;

void spaces(char sentence[]){
    int i = 0;
    int j = strlen(sentence);

    for (int i = 0; i < j; i++){
        if (sentence[i] == ' '){
            sentence[i] = '@';
        }
    }
}

int main(){
    char sentence[100];
    cin.getline(sentence, 50);
    spaces(sentence);
    cout << "After changing - " << sentence;
}