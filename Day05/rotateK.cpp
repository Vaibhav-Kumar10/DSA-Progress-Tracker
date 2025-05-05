vector<int> rotateArray(vector<int> arr, int k)
{
    int n = arr.size();
    k = k % n;
    // vector<int> temp;
    // for (int i = 0; i < k; i++) {
    //     temp.push_back(arr[i]);
    // }
    // for (int i = k; i < n; i++) {
    //     arr[i - k] = arr[i];
    // }
    // for (int i = n - k; i < n; i++) {
    //     arr[i] = temp[i - n + k];
    // }

    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());

    return arr;
}
