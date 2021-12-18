/*
	Time Complexity: O(N)
	Space Complexity: O(N)

	Where 'N' is the total number of elements in the array.
*/

#include <unordered_map>

vector<pair<int, int>> twoSum(vector<int> &arr, int target, int n)
{
    unordered_map<int, int> hashMap;

    vector<pair<int, int>> ans;

    for (int i = 0; i < n; i++)
    {
        hashMap[arr[i]]++;
        if (arr[i] == target - arr[i])
        {
            if (hashMap[arr[i]] > 1)
            {
                ans.push_back(arr[i], arr[i]);
                hashMap[arr[i]] -= 2;
            }
        }
        else
        {
            if (hashMap[arr[i]] > 0 && hashMap[target - arr[i]] > 0)
                ans.push_back({arr[i], target - arr[i]});
            // Frequency will decrease by 1.
            hashMap[arr[i]] -= 1;
            hashMap[target - arr[i]] -= 1;
        }
    }
    if (ans.size() == 0)
    {
        ans.push_back({-1, -1});
    }

    return ans;
}