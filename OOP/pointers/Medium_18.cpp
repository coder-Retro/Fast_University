#include<iostream>
using namespace std;
int main()
{
    int Row,Col;
    cout<<"Enter Rows of Matrices : ";
    cin>>Row;
    cout<<"Enter Cols of Matrices : ";
    cin>>Col;
    int **m1,**m2,**m3;
    m1=new int*[Row];
    m2=new int*[Row];
    m3=new int*[Row];
    for(int i=0;i<Row;i++)
    {
        *(m1+i)=new int[Col];
        *(m2+i)=new int[Col];
        *(m3+i)=new int[Col];
    }
    cout<<"Enter Matrix A :\n";
    for(int i=0;i<Row;i++)
        for(int j=0;j<Col;j++)
            cin>>*(*(m1+i)+j);
    cout<<"Enter Matrix B :\n";
    for(int i=0;i<Row;i++)
        for(int j=0;j<Col;j++)
        {
            cin>>*(*(m2+i)+j);
            *(*(m3+i)+j)=*(*(m1+i)+j)+*(*(m2+i)+j);
        }
    cout<<"Matrix A + Matrix B :\n";
    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Col;j++)
            cout<<*(*(m3+i)+j)<<" ";
        cout<<'\n';
    }
    for(int i=0;i<Row;i++)
    {
        delete[] *(m1+i); *(m1+i)=nullptr;
        delete[] *(m2+i); *(m2+i)=nullptr;
        delete[] *(m3+i); *(m3+i)=nullptr;
    }
    delete[] m1; m1=nullptr;
    delete[] m2; m2=nullptr;
    delete[] m3; m3=nullptr;
    return 0;
}