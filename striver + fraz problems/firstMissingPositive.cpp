class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int result;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < nums.size())
            {
                int temp = nums[i];
                swap(nums[temp], nums[i]);
            }
        }
        for (int i = 0; i < nums.size(); i++)

        {
            if ((nums[i] == i + 1) && (nums[i] > 0))
            {
                result = i + 1;
                break;
            }
        }

        return result;
    }
};