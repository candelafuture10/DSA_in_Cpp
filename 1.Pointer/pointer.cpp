#include <iostream>
using namespace std;

int main()
{
    int i=10;
    cout<<&i<<endl;
    int *p=&i;//*p is a variabl that can hold  address.  
    cout<<"Address of int Pointer = = "<<p<<endl;
    cout<<"By using Pointer getting the value of p="<<*p<<endl;


    float f=10.234;
    float *pf=&f;
    cout<<"Address of float pointer ="<<pf<<endl;

    double d=12334.453;
    double *pd=&d;
    cout<<"Address of double pointer ="<<pd<<endl;

    char *z;
    cout<<z<<endl;
    cout<<*z<<endl;
    char *m;
    cout<<m<<endl;
    cout<<*m<<endl;

}
