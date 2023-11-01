#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"===Program Started==="<<endl;
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6}; //expected output =>8
    int n = arr.size();
    unordered_set<int> s;

    for(int x:arr){
        s.insert(x);
    }

    int largestLength = 1;

    int i=0;
    while(i<n){
        int num_to_find = arr[i]-1;
        if(s.find(num_to_find) == s.end()){ //means not found
            int next_element = arr[i]+1;
            int cnt = 1;
            while(s.find(next_element) != s.end()){
            //means element found in between before reaching end
                next_element++;
                cnt++;
              }

              if(cnt>largestLength){
                largestLength = cnt;
              }
        }
        i++;
        }

        cout<<largestLength<<endl;



    return 0;
}
