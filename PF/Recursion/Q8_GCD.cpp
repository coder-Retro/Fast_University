#include<iostream>
using namespace std;

int recursiveGCD(int a,int b) {
    if(!b) return a;
    return recursiveGCD(b,a%b);
}

int main() {
    int a=3;
    int b=6;
    cout<<recursiveGCD(a,b);
    return 0;
}