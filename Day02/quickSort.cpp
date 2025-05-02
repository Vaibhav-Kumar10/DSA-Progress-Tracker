class Solution
{
public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int> &arr, int low, int high)
    {
        // code here
        if (low >= high)
            return;
        int partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }

public:
    // Function that takes last element as pivot, places the pivot element at
    // its correct position in sorted array, and places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int> &arr, int low, int high)
    {
        // code here
        int pivot = arr[low];
        int i = low, j = high;
        while (i < j)
        {
            while (arr[i] <= pivot && i < high)
                i++;
            while (arr[j] > pivot && j > low)
                j--;
            if (i < j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
        return j;
    }
};
