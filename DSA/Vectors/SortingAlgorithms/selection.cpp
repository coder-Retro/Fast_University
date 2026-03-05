#include<iostream>
#include<time.h>
#include<vector>
using namespace std;
// Function Prototype
void selectionSort(vector<int>& vec); // Time Complexity : O(n²)
// Main Function
int main()
{
    srand(time(0));
    vector<int> vec(10);
    for(int i=0;i<10;i++)
        vec[i]=rand()%11;
    cout<<"Before Sort : ";
    for(int i:vec)
        cout<<i<<" ";
    cout<<'\n';
    selectionSort(vec);
    cout<<"After Sort  : ";
    for(int i:vec)
        cout<<i<<" ";
    return 0;
}
// Function Definition
void selectionSort(vector<int>& vec)
{
    size_t min;
    for(size_t i=0;i<vec.size()-1;i++)
    {
        min=i;
        for(size_t j=i+1;j<vec.size();j++)
            if(vec[j]<vec[min]) min=j;
        if(i!=min)
            swap(vec[i],vec[min]);
    }
}