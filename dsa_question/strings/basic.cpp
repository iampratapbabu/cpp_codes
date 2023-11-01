#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"program started"<<endl;
    string s = "this is new string";
    cout<<s<<endl;

    //iterating every character in the string
    for(char ch:s){
        cout<<"single character: "<<ch<<endl;
    }

    //taking input
    string new_string;
    getline(cin,new_string,'.'); //when we use . in our input string at that point it will stop taking input;
    cout<<new_string<<endl;

    return 0;
}
