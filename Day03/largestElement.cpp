class Solution
{
public:
    int largest(vector<int> &arr)
    {
        int maxNo = arr[0];
        for (int i = 0; i < arr.size(); i++)
        {
            maxNo = max(maxNo, arr[i]);
        }
        return maxNo;
    }
};