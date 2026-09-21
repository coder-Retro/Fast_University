#include<iostream>
using namespace std;

long long fib(int n) {
    if(n<2) return n;
    return fib(n-1)+fib(n-2);
}

int main() {
    int n=8;
    cout<<fib(n);
    return 0;
}