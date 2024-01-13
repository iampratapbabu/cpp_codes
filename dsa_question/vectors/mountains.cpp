#include <bits/stdc++.h>
using namespace std;

int highest_mountain(vector<int> arr)
{
    int n = arr.size();
    vector<int> peaks;
    int largest = 0;

    for (int i = 1; i < n - 2;)
    {
        // cout<<arr[i]<<arr[i+1]<<arr[i+2]<<endl;
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
        {
            cout << "\npeak found " << arr[i] << endl;
            peaks.push_back(arr[i]);
            int count = 1;
            int j = i; 
            while (j >= 1 && arr[j] > arr[j - 1]){
                j--;
                count++;
            }

            while (i <= n - 2 && arr[i] > arr[i + 1]){
                i--;
                count++;
            }

            largest = max(largest, count);
        }else{
            i++;
        }
    }

    return largest;
}

int main()
{
    vector<int> arr = {5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};
    cout << "Highest Peak" << highest_mountain(arr) << endl;
    return 0;
}