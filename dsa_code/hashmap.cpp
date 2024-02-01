#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int> my_map;

    int myarr[] = {1,3,35,8,1,4,8,35};
    int n = sizeof(myarr)/sizeof(myarr[0]);

    for(int i=0;i<n;i++){
        my_map[myarr[i]]++;
    }

    for(auto x:my_map){
        cout<<x.first<<"  "<<x.second<<endl;
    }


}
