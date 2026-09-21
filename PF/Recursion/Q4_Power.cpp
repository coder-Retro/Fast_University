#include<iostream>
using namespace std;

int myPow(int base,int exponent) {
    if(exponent==1) return base;
    return base*myPow(base,exponent-1);
}

int main() {
    int base=2;
    int exponent=5;
    cout<<myPow(base,exponent);
    return 0;
}