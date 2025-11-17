#include<iostream>
using namespace std;
int main()
{

    int a[3][3];

    cout<<"Enter the elements:: ";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    cout<<"The array elements is:: ";

    for( int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<endl;
        }
    }
    return 0;
}