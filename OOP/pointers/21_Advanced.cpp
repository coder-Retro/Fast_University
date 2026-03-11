#include<iostream>
using namespace std;
int main()
{
    int start,end;
    cout<<"Enter Start Number : ";
    cin>>start;
    cout<<"Enter End Number : ";
    cin>>end;
    if(start<0||end<0||start>end) cout<<"Invalid Inputs";
    else
    {
        int factors;
        cout<<"Prime Numbers between "<<start<<" and "<<end<<" :\n";
        for(int *i=&start,*j=&end;*i<=*j;(*i)++)
        {
            factors=0;
            for(int k=1;k<=*i;k++)
            {
                if(*i%k==0) factors++;
                if(factors>2) break;
            }
            if(factors==2) cout<<*i<<" ";
        }
    } 
    return 0;
}