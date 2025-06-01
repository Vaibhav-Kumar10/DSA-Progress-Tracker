class Solution
{
public:
    vector<int> findTwoElement(vector<int> &arr)
    {
        int n = arr.size(); // size of the array
        int SN = (n * (n + 1)) / 2;
        int S2N = (n * (n + 1) * (2 * n + 1)) / 6;
        int S = 0, S2 = 0;
        for (int i = 0; i < n; i++)
        {
            S += arr[i];
            S2 += arr[i] * (arr[i]);
        }
        int val1 = S - SN;
        int val2 = S2 - S2N;
        val2 = val2 / val1;
        int x = (val1 + val2) / 2;
        int y = (x - val1);
        return {x, y};
    }
};