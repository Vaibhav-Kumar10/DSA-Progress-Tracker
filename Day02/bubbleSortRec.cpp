class Solution
{
public:
    void bubbleSortRec(vector<int> &arr, int n)
    {
        if (n == 1)
            return;
        for (int j = 0; j <= n - 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        bubbleSortRec(arr, n - 1);
    }
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int> &arr)
    {
        // Your code here
        int n = arr.size();
        bubbleSortRec(arr, n);
    }
};
