// Pointer value and Store and accesing the value 
#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int *pi=&i;
    int *q;
    // accesing the vale by two way 1. is by i and another by using Pointer adderss
    cout<<" way-1-> i= "<<i<<endl;
    cout<<" way -2-> *p= "<<*pi<<endl;
// if I increment the value of i  dose the pointer addess value also be change ...
//Yes both will be Updated
    
    i++;
    cout<<"value through i ="<<i<<endl;
    cout<<" value through *pi="<<*pi<<endl;
    int a=*pi;
    a++;
    cout<<i<<endl;
    cout<<a<<endl;
    *pi=23;
    cout<<*pi<<endl;
    cout<<i<<endl;
    *q=*pi;
    cout<<*q<<endl;




}