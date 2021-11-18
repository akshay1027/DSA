//	The sum of first 'n' numbers is "n(n + 1)/2".
//	Subtracting all the numbers in the array from  "n(n+1)/2" will give us the missing number.
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int totalSum = (n * (n + 1)) / 2;
        int result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            totalSum -= nums[i];
        }
        result = totalSum;
        return result;
    }
};

// Map solution:
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        unordered_map<int, int> m;
        int a;
        for (auto it : nums)
        {
            m[it]++;
            if (m[it] > 1)
            {
                a = it;
            }
        }
        return a;
    }
};

// My solution : Solves the problem but it doesnot use any algo!
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i <= n; i++)
        {
            if (i == nums.size())
            {
                result = i;
                break;
            }
            else if (i != nums[i])
            {
                result = i;
                break;
            }
        }
        return result;
    }
};
