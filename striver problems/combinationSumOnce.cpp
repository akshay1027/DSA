#include <bits/stdc++.h>
using namespace std;

void combination(int index, int target, vector<int> &nums, vector<int> &temp, vector<vector<int>> &answer)
{
    if (index == nums.size())
    {
        if (target == 0)
        {
            answer.insert(answer.begin(), temp);
        }
        return;
    }

    // picking that number
    if (nums[index] <= target)
    {
        temp.push_back(nums[index]);
        // cout << " pick ";
        // for (auto i = temp.begin(); i != temp.end(); ++i)
        // {
        //     cout << *i << " ";
        // }
        // cout << endl;
        combination(index + 1, target - nums[index], nums, temp, answer);
        // cout << "Hi" << endl;
        // temp.pop_back();
        temp.erase(temp.begin());
    }
    // cout << " not pick ";
    // for (auto i = temp.begin(); i != temp.end(); ++i)
    // {
    //     cout << *i << " ";
    // }
    // cout << endl;

    // not picking that number
    combination(index + 1, target, nums, temp, answer);
}

int main()
{
    int target, n, x;
    vector<vector<int>> answer;
    vector<int> temp;
    vector<int> nums;

    cin >> target;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    combination(0, target, nums, temp, answer);

    // cout << answer[0][0] << " ";
    // cout << answer[1][0];

    for (vector<int> vect1D : answer)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}