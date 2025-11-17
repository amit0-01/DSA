#include<iostream>
using namespace std;
int main()
{
    int a[3];
    
    cout<<"enter 3 elements: ";
    for(int i=0;i<=2;i++)
    {
        cin>>a[i];
    }
    
    cout<<"The arrays elements are:: ";
    
    for(int i=0;i<=2;i++)
    {
        cout<< *(a+i)<<endl;
    }
    return 0;
}
