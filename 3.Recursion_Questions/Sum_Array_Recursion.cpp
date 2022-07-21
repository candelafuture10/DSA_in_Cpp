// Given an array of length N, you need to find and return the sum of all elements of the array.
// Do this recursively.

#include<iostream>
using namespace std;

int sum(int a[] , int n)
    {
        //  Base Case 
        if(n==0)
            {
                return 0;
            }
        //  Recurcive call and Small Calculation 
        return a[0]+=sum(a+1,n-1);
    }
int main ()
{
    int a[]={1,2,3};
    int n=3;
    cout<<sum(a,n);
}