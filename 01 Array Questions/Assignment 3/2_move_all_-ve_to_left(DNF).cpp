#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> arr = {2, 0, 1, 2, 1, 0}
    vector<int> arr = {2, 5, -1, 4, -8, -6};
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[high], arr[low]);
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
