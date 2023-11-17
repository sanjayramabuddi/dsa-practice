#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 5, 8, 7};
    vector<int> brr{1, 3, 5, 7, 4};
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < brr.size(); j++){
            if (arr[i] == brr[j])
                brr[j] = -1;
        }
    }

    for (int i = 0; i < arr.size(); i++){
        ans.push_back(arr[i]);
    }
    
    for (int j = 0; j < brr.size(); j++){
        if (brr[j] != -1)
            ans.push_back(brr[j]);
    }

    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}