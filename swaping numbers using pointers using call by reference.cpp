#include<iostream>
using namespace std;
swap(int *a,int *b){
int temp;
        temp=*b;
       *b=*a;
       *a= temp;
}
int main()
{
    int a=10;
    int b=20;
    swap(&a,&b);
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;
  return 0;
}