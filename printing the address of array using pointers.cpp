#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int *p;
    p=&a[0][0];
    
    cout<<"Methods to return base address of first row in 2d array"<<endl;
    cout<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<a<<endl;
    cout<<&a[0][0]<<endl;
    cout<<&a<<endl;
    cout<<*a<<endl;
    cout<<a[0]<<endl;
    
    cout<<"Methods to return the base address of second row in  2d array"<<endl;
    cout<<endl;
    cout<<a+1<<endl;
    cout<<a[1]<<endl;
    cout<<&a[1][0]<<endl;
    cout<<*(a+1)<<endl;

    cout<<"print";
    cout
 return 0;

} 