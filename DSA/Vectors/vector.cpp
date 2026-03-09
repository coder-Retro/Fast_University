#include<iostream>
#include<vector>
using namespace std;
/*
Vectors are basically re-sizable dynamic arrays that can increase
their size on runtime whenever a new element is pushed into them.
Majority of Leetcode problems require use of vectors rather than
arrays which have a fixed size and cant be changed on runtime.
Vector functions :
.size();             gives size of vector
.push_back(value);   adds a value to end of vector
.pop_back();         removes a value from end of vector
.front();            gives the value at front of vector
.back();             gives the value at back of vector
.at(index);          gives the value at index i, same as vec[i]
*/
int main()
{
    // Declaring Empty Vector
    vector<int> vec1;
    // .size(); Function :
    cout<<"Vec1 size Empty : "<<vec1.size()<<'\n';
    // .push_back(value) Function :
    for(int i=1;i<=5;i++)
        vec1.push_back(i);
    cout<<"Vec1 size PushBack : "<<vec1.size()<<'\n';
    // For Each Loop :
    cout<<"Vec1 Elements : ";
    for(int value:vec1)
    {
        cout<<value<<" ";
    }
    cout<<'\n';
    // .pop_back(); Function :
    vec1.pop_back();
    cout<<"Vec1 size PopBack : "<<vec1.size()<<'\n';
    // For Each Loop :
    cout<<"Vec1 Elements : ";
    for(int value:vec1)
    {
        cout<<value<<" ";
    }
    cout<<'\n';
    // .back() Function :
    cout<<"Vec1.back() : "<<vec1.back()<<'\n';
    // .front() Function :
    cout<<"Vec1.front() : "<<vec1.front()<<'\n';
    // .at(index) Function :
    cout<<"Vec1 Elements using .at(index) : ";
    for(int i=0;i<vec1.size();i++)
        cout<<vec1.at(i)<<" ";
    return 0;
}