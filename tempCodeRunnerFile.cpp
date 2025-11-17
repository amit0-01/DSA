#include<iostream>
using namespace std;

int main()
{
    int i,a[50],pos,no,size;
    cout<<"enter the size of array:: ";
    cin>>size;

    cout<<"Enter array elements:: \n";

    for(i=0;i<size;i++){
    cin>>a[i];
    }

    cout<<"The array is:: \n";

    for(i=0;i<size;i++)
    {
        cout<<a[i];
    }

    return 0;

}