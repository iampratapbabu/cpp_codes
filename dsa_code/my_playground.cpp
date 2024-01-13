#include <bits/stdc++.h>
using namespace std;

void printNos(int x){
    vector<int> tempArr;
    if(x == 1){
        cout<<1<<endl;
        return;
    }

    printNos(x-1);
    cout<<x<<endl;
    return;

}

void printName(int i,int n){
    if(i>n) return;
    cout<<"Tej Pratap"<<endl;
    printName(i+1,n);
}

void print1toN(int n){
    if(n < 1) return;
    print1toN(n-1);
    cout<<n<<endl;
}

void printNto1(int n){
    if(n < 1) return;
    cout<<n<<endl;
    printNto1(n-1);
}

int sumOfN(int n){
    if(n==0) return 0;
    return n+sumOfN(n-1);
}

void reverseArray(){

}

int main(){
    cout<<"program started"<<endl;
    //printNos(5);
    //printName(1,5);
    //print1toN(5);
    //printNto1(5);
    cout<<sumOfN(90);
}
