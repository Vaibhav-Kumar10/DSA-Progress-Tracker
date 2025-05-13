class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        long long maxEl = LONG_MIN;
        long long sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (sum > maxEl)
                maxEl = sum;
            if (sum < 0)
                sum = 0;
        }
        return maxEl;
    }
};