// Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
// First index means, the index of first occurrence of x in the input array.
// Do this recursively. Indexing in the array starts from 0.

#include<iostream>
using namespace std ;

int FirstIndex(int *a, int size, int x)
{
        // Base Case 
        if(size==0)
        {
            return -1;
        }
        //  Small Calculation 
        if(a[0]==x)
            return 0;
        int ans=FirstIndex(a+1,size-1,x);  // Recurcive call
            if(ans==-1)
                return -1;
            else
                return ans+=1;
}

int main ()
{
    int a[]={1,2,3,4,5};
    int size= 5,x=0;
    cout<<FirstIndex(a,size,x);
}