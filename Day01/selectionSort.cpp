class Solution
{
public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        for (int i = 0; i < n - 1; i++)
        {
            int min_id = i;
            for (int j = i; j < n; j++)
            {
                if (arr[j] <= arr[min_id])
                    min_id = j;
            }
            int temp = arr[i];
            arr[i] = arr[min_id];
            arr[min_id] = temp;
        }
    }
};
