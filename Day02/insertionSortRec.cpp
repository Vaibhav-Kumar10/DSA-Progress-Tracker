class Solution
{
public:
    void insertionSortRec(vector<int> &arr, int i, int n)
    {
        if (i == n)
            return;
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
        insertionSortRec(arr, i + 1, n);
    }
    // Please change the array in-place
    void insertionSort(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        insertionSortRec(arr, 0, n);
    }
};