#include <bits/stdc++.h>
using namespace std;


int main()
{
    cout<<"===Program Started==="<<endl;
    string paragraph = "hello world, how are you?";
    int space_counter = 0;
    for(int i=0;paragraph[i] != '\0';i++){
            //cout<<"paragraph words"<<paragraph[i];
            if(paragraph[i]== ' '){
                space_counter+=1;
            }
    }
    cout<<space_counter<<endl;
    cout<<paragraph.length()<<endl;

    int idx = paragraph.length() + 2*space_counter;
    cout<<idx<<endl;
    //it looks like it should be 3*space_counter but one space is already there so we need only 2 extra space
    paragraph[idx] = '\0'; //we putted null character on end of string
    for(int i = paragraph.length()-1;i>=0;i--){
        if(paragraph[i]==' '){
            paragraph[i-1] = '0';
            paragraph[i-2] = '2';
            paragraph[i-3] = '%';
            idx = idx-3;
        }
        else{
            paragraph[idx-1] = paragraph[i];
            idx--;
        }
    }
    cout<<paragraph<<endl;

    return 0;
}

