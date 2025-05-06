class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size(), j = 0;
        while (j < n && nums[j] != 0)
        {
            j++;
        }
        for (int i = j + 1; i < n; i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};