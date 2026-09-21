#include<iostream>
using namespace std;

long long decToBin(int n) {
    if(n<1) return 0;
    return (n&1)+(decToBin(n>>1)*10);
}

int main() {
    int n=10;
    cout<<decToBin(n);
    return 0;
}gi