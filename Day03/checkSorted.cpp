class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size(), count = 0;
        // Checks if array is sorted
        if (nums[0] < nums[n - 1])
            count++;
        // Checks and counts if elements are not in correct order
        for (int i = 0; i < n - 1; i++)
            if (nums[i] > nums[i + 1])
                count++;
        // If more than 1 elements are in wrong order, it returns false
        return count <= 1;
    }
};