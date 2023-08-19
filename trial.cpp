#include<bits/stdc++.h>
using namespace std;

int distinct(vector<int> arr)
{
    int n = arr.size();
    map<int, int> mpp;

    // Insert all elements into the Set
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]] = 1;
    }

    // Return the size of set
    return mpp.size();
}

// Function that finds the maximum
// sum of K-length subarray having
// same unique elements as arr[]
int maxSubSum(vector<int> arr, int k)
{
    int n = arr.size();
    if (k > n)
        return 0;
    int maxm = INT_MIN, sum = 0;
    for (int i = 0; i < n - k + 1; i++)
    {
        sum = 0;

        // Initialize Set
        set<int> st;

        // Calculate sum of the distinct elements
        for (int j = i; j < i + k; j++)
        {
            sum += arr[j];
            st.insert(arr[j]);
            cout<<arr[j]<<endl;
        }

        // If the set size is same as the
        // count of distinct elements
        if ((int)st.size() == k)

            // Update the maximum value
            maxm = max(sum, maxm);
        cout<<sum;
    }
    return maxm;
}

    int main(){
        vector<int> v={1,2,7,7,4,3,6};
        int k=3;
        int ans=distinct(v);
        cout<<maxSubSum(v,k)<<endl;
    }
