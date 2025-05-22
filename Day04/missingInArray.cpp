class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        // int n = nums.size();
        // int sumN = n * (n + 1) / 2;
        // int arraySum = 0;
        // for (int el : nums)
        //     arraySum += el;
        // int missing = sumN - arraySum;
        // return missing;

        int N = nums.size();
        int xor1 = N, xor2 = 0;
        for (int i = 0; i < N; i++)
        {
            xor1 = xor1 ^ (i);     // XOR up to [1...N-1]
            xor2 = xor2 ^ nums[i]; // XOR of array elements
        }
        // xor1 = xor1 ^ N;      // XOR up to [1...N]
        return (xor1 ^ xor2); // the missing number
    }
};