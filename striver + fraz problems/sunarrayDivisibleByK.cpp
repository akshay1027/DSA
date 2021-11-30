class Solution
{
public:
    int subarraysDivByK(vector<int> &a, int k)
    {
        int n = a.size();
        if (n == 0)
            return 0;

        int i = 0, count = 0;
        int curSum = 0;
        unordered_map<int, int> mp;
        mp[0] = 1; // this is done because initial cumulative sum = 0 and that sum%k will be equal to 0 always
        for (int i = 0; i < n; i++)
        {
            curSum += a[i];
            int rem = curSum % k;
            if (rem < 0)
            {
                rem += k;
            }
            if (mp.find(rem) != mp.end())
                count += mp[rem];

            mp[rem]++;
        }
        return count;
    }
};