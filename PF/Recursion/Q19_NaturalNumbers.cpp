#include<iostream>
using namespace std;

void naturalNums(int n) {
    if(n<1) return;
    naturalNums(n-1);
    cout<<n<<" ";
}

int main() {
    int n=10;
    naturalNums(n);
}