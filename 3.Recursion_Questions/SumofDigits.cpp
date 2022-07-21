/* Sum of digits (recursive)

Write a recursive function that returns 
the sum of the digits of a given integer.
*/
#include<iostream>
using namespace std;

int SumDigits(int n)
{
    if(n==0)
    {
        return 0;
    }

    return n%10+SumDigits(n/10);
        
}
int main ()
{
    int n=1203  ;
    cout<<SumDigits(n);
}