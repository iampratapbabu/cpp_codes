#include <bits/stdc++.h>
using namespace std;

int main()
{
    string paragraph = "this is my paragraph for string program is that i iam learning";

    string input_word;
    getline(cin,input_word);

    //cout<<paragraph.find(input_word);
    /* .find() return the index value if it found the matching word
        if there is no matching word then it will return very long unsigned integer and when we will convert it to
        integer it become -1 so we can check by this logic that string is found or not

    */
    int found_index = paragraph.find(input_word);
    if(found_index == -1){
        cout<<"string not found"<<endl;
    }
    else{
        cout<<"string found at: "<<found_index<<endl;
    }

    //question - find all occurences of given word inside a string
    cout<<"first occurence: "<<found_index<<endl;
    while(found_index != -1){
        found_index = paragraph.find(input_word,found_index+1);
        cout<<"string found: "<<found_index<<endl;
    }



    return 0;
}

