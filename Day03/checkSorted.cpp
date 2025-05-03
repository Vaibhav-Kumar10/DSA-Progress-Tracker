class Solution
{
public:
    bool check(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                if (nums[i] < nums[i + 2])
                    return false;
            }
        }
        return true;
    }
};