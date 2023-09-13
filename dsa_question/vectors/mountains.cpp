#include <bits/stdc++.h>
using namespace std;

int highest_mountain(vector<int> arr)
{
    int n = arr.size();
    vector<int> peaks;

    int peak_length = 0;
    int largest = 0;

    for (int i = 0; i < n; i++)
    {
        // cout<<arr[i]<<arr[i+1]<<arr[i+2]<<endl;
        if (arr[i] < arr[i + 1] && arr[i + 1] > arr[i + 2])
        {
            cout << "peak found " << arr[i + 1] << endl;
            peaks.push_back(arr[i + 1]);
            int count = 1;
            int j = i + 1;
            while (j >= 1 && arr[i + 1] > arr[j])
            {
                j--;
                count++;
            }

            while (i <= n-2 && arr[i + 1] > arr[i+2])
            {
                i--;
                count++;
            }
            largest = max(largest,count);
        }
    }

    return largest;
}

int main()
{
    cout << "program started" << endl;
    vector<int> arr = {5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};

    cout << "---Highest Peak---->" << highest_mountain(arr) << endl;

    return 0;
}