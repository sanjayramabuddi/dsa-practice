#include <iostream>
#include <vector>
using namespace std;

int firstOccur(vector<int> v, int target)
{
	int start = 0;
	int end = v.size() - 1;
	int mid = start + (end - start) / 2;
	int ans1 = -1;

	while (start <= end)
	{
		if (v[mid] == target)
		{
			ans1 = mid;
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

	return ans1;
}

int lastOccur(vector<int> v, int target)
{
	int start = 0;
	int end = v.size() - 1;
	int mid = start + (end - start) / 2;
	int ans2 = -1;

	while (start <= end)
	{
		if (v[mid] == target)
		{
			ans2 = mid;
			start = mid + 1;
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

	return ans2;
}

int main()
{
	vector<int> v
	{ 2, 4, 6, 6, 6, 7, 8, 10 };

	int target = 6;
	int firstIs = firstOccur(v, target);
	int lastIs = lastOccur(v, target);
	int ans = lastIs - firstIs + 1;
	cout << "Total occurence is " << ans;
	return 0;
}