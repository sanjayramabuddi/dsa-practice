#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> v, int target)
{
	int start = 0;
	int end = v.size() - 1;
	int mid = start + (end - start) / 2;
	int ans = -1;

	while (start <= end)
	{
		if (v[mid] == target)
		{
			ans = mid;
			end = mid - 1;
		}
		else if (v[mid] < target)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}

		mid = start + (end - start) / 2;
	}
}

int main()
{
	vector<int> v
	{ 2, 4, 6, 6, 6, 7, 8, 10 };

	int target = 6;
	int targetIs = binarySearch(v, target);
	cout << "Ans is " << targetIs;
	return 0;
}