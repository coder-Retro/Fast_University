#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(const string& s,int l,int r) {
    if(l>=r) return true;
    if(s[l]!=s[r]) return false;
    return isPalindrome(s,l+1,r-1);
}

int main() {
    string str="racecar";
    cout<<(isPalindrome(str,0,str.size()-1)?"true":"false");
}