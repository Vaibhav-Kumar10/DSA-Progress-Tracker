class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0, max1 = 0;
        for (int el : nums)
        {
            if (el == 1)
                count++;
            else
                count = 0;
            max1 = max(max1, count);
        }
        return max1;
    }
};