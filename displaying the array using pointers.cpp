#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    cout<<&arr<<endl;//displaying the address of first array element
    cout<<*arr<<endl;//displaying the first element of the array

    int *ptr=arr;

    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<endl;
    }
}