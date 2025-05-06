class Solution
{
public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b)
    {
        int n = a.size(), m = b.size(), i = 0, j = 0;
        vector<int> Union;
        while (i < n && j < m)
        {
            if (a[i] <= b[j])
            {
                if (Union.size() == 0 || Union.back() != a[i])
                    Union.push_back(a[i]);
                i++;
            }
            else
            {
                if (Union.size() == 0 || Union.back() != b[j])
                    Union.push_back(b[j]);
                j++;
            }
        }
        while (i < n)
        {
            if (Union.back() != a[i])
                Union.push_back(a[i]);
            i++;
        }
        while (j < m)
        {
            if (Union.back() != b[j])
                Union.push_back(b[j]);
            j++;
        }
        return Union;
        // return vector with correct order of elements
    }
};
