#include<iostream>
#include<string>
using namespace std;

string reverseStr(string s,int l,int r) {
    if(l>=r) return s;
    char temp=s[l];
    s[l]=s[r];
    s[r]=temp;
    return reverseStr(s,l+1,r-1);
}

int main() {
    string str="Hello";
    cout<<reverseStr(str,0,str.size()-1);
}