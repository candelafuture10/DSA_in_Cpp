//  Inline Function -> easy to read the code 
#include<iostream>
using namespace std;

inline int max(int a , int b)
    {
        return(a>b)?a:b; // Ternerary Operator 
    }
int main ()
{
    int a,b;
    cin>>a>>b;
    int c=max(a,b);
    int x,y;
    x=12;
    y=34;
    int z =max(x,y);
}