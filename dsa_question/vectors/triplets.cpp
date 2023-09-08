#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> calculateTriplets(vector<int> arr, int S)
{
    vector<vector<int>> res;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (S == arr[i] + arr[j] + arr[k])
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    res.push_back(temp);
                }
            }
        }
    }
    return res;
}

int main()
{
    cout << "===Program Started===" << endl;
    // int myArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    vector<int> myArr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    // string newArr[] = {"hello", "baby"};

    // for(int i=0;i<8;i++){
    //     cout<<myArr[i]<<endl;
    // }

    auto p = calculateTriplets(myArr, 18);
    for (auto result:p)
    {
        for (auto number: result)
        {
            cout<<number<<",";
        }
        cout<<endl;
    }

    return 0;
}
