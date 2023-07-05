#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"===Program Started==="<<endl;
    //2d vector;
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9,10},{11,12}};

    cout<<arr.size()<<endl;
    cout<<arr[0].size()<<endl;

    //priting the 2d vector
    for(int i=0;i<arr.size();i++){
            cout<<"{";
        for(int number:arr[i]){
            cout<<number<<",";
        }
        cout<<"}";

    }

    return 0;
}
