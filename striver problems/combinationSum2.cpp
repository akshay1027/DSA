class Solution
{
public:
    vector<int> print(vector<int> vec)
    {
        vector<int> v1;
        for (int i = 0; i < vec.size(); i++)
        {
            v1.push_back(vec[i]);
        }
        return v1;
    }

    void combination(int index, int target, vector<int> &nums, vector<int> &temp, set<vector<int>> &ans)
    {
        if (index == nums.size())
        {
            if (target == 0)
            {
                ans.insert(temp);
            }
            return;
        }
        if (nums[index] <= target)
        {
            temp.push_back(nums[index]);
            combination(index + 1, target - nums[index], nums, temp, ans);
            temp.pop_back();
        }
        combination(index + 1, target, nums, temp, ans);
    }

    vector<vector<int>> combinationSum2(vector<int> &nums, int target)
    {
        vector<vector<int>> finalAns;
        vector<int> temp;
        set<vector<int>> ans;

        int n = nums.size();
        if (n == 0)
            return {};
        if (n == 1 && nums[0] != target)
            return {};
        sort(nums.begin(), nums.end());

        if (nums[0] == nums[n - 1])
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += nums[i];
                temp.push_back(nums[i]);
                if (sum == target)
                    break;
            }
            if (sum == target)
            {
                finalAns.push_back(temp);
                return finalAns;
            }
            else
                return {};
        }

        combination(0, target, nums, temp, ans);

        for (auto it = ans.begin(); it != ans.end(); it++)
            finalAns.push_back(print(*it));

        return finalAns;
    }
};