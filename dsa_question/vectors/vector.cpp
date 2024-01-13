#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"===Program Started==="<<endl;
    //vector<int> arr = {1,2,10,12,15};

    //Fill constructor
    vector<int> arr(10,7);

    arr.pop_back();
    arr.push_back(5);

    //printing all elements of vector
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }

    //printing using foreach
    for(int x:arr){
        cout<<x<<",";
    }
    cout<<endl;


    cout<<"size of vector: "<<arr.size()<<endl;
    cout<<"capacity of vector: "<<arr.capacity()<<endl;

    return 0;
}
