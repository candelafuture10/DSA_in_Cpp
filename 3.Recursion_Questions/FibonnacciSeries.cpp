#include<iostream>
using namespace std;

int fibo(int n)
{
    //  Base Case 
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    return 1;
        int Smalloutput=fibo(n-1);
        int Smalloutput1=fibo(n-2);
        return Smalloutput+Smalloutput1;
}
int main ()
{
    int n;
    cin>>n;
    cout<<fibo(n);
}