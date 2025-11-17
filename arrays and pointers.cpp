#include<iostream>
using namespace std;
int main()
{    
    //print the address of array using array
    
    int a[3];
    int *ptr;
    
    for(int i=0;i<3;i++){
        cout<<&a[i]<<endl;
    }
    
    
    //print the address of array using pointers

    ptr=a;
    for(int i=0;i<3;i++)
    cout<<ptr+i<<endl;
    
    
    
    return 0;
}
