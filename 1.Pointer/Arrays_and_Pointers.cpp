#include<iostream>
using namespace std;
int main()
{
    int a[10];
    a[0]=5;
    a[1]=10;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<*a<<endl;
    cout<<*(a+1)<<endl;
    char c1='a';
    char *pc=&c1;
    cout<<c1<<endl;
    cout<<pc<<endl;
    
    
return 0;
}
                                                                                                                             