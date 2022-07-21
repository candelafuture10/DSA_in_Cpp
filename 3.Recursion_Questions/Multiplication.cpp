/* Given two  M and N,
// calculate and return their multiplication using
//  recursion. You can only use subtraction and 
//  addition for your calculation.
// No other operators are allowed.*/
#include<iostream>
using namespace std;

int Multiplicatin(int m ,int n )
{
    //  Base Case 
    if(n==0)
    {
        return 0;
    }
    //  Recurcive Call and Small Calculation 
    return m+Multiplicatin(m,n-1);
}
int main ()
{
    int m=5,n=1;
    cout<<Multiplicatin(m,n);
}