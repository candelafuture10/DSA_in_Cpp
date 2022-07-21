//  Check wheather the given Array is Sorted or not By using Recursion .
#include<iostream>
using namespace std;

bool Sorted(int a[], int size)
{
    //  Base Case 
    if(size == 0 || size == 1)
            {
                return true;
            }
    if (a[0]> a[1])
    {
        return false;
    }
    //  Recurcive Case 
    bool is_SmallerSorted = Sorted(a+1,size-1);
        if(is_SmallerSorted)
        {
            return(true);
        }
        else
        {
            return(false);
        }

}

int main ()
{
    int a[]={1,2,3,4,5};
    int size=5;
    cout<<Sorted(a,size);
}

