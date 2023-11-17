#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

void printArray(vector<int> arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr { 1, 2, 3, 4, 1, 3, 2, 5, 5 };
    int uniqueElement = findUnique(arr);
    cout << "Unique Element is  " << uniqueElement << endl;
}