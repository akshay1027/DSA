class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int n = nums.size(), temp;
        vector<int> answer;

        for (int i = 0; i < n; i++)
        {
            temp = abs(nums[i]) - 1;
            // cout<<nums[temp]<<"#"<<endl;
            nums[temp] = nums[temp] > 0 ? -nums[temp] : nums[temp];
            // nums[temp] = abs(nums[temp]) * -1;
        }

        // for(int i=0; i<n; i++) {
        //     cout<<nums[i]<<"*"<<endl;
        // }

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                answer.push_back(i + 1);
            }
        }

        return answer;
    }
};