long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long currentsum = 0, maxsum = 0;
    for (long i : arr)
    {
        currentsum += i;
        if (currentsum > maxsum)
            maxsum = currentsum;
        if (currentsum <= 0)
            currentsum = 0;
    }
    return maxsum;
}
