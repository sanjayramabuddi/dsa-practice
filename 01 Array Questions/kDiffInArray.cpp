#include <iostream>
#include <vector>
using namespace std;

int findPairs(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;

    int i = 0, j = 1;

    while (j < nums.size())
    {
        int diff = nums[j] - nums[i];

        if (diff == k)
        {
            ans.insert({nums[i], nums[j]});
            i++;
            j++;
        }
        else if (diff < k)
        {
            j++;
        }
        else
        {
            i++;
        }
        if (i == j)
            j++;
    }
    return ans.size();
}
