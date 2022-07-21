#include<iostream>
using namespace std;

bool sorted(int a[], int size)
{
        // Base Case 
        if (size==0|| size==1)
        {
            return true;
        }
        //  Recurcive Call and Small Calculation
        if(a[0]>a[1])
        {
            return false;
        }
        bool smalloutput=sorted(a+1,size-1);
        return(smalloutput);

}
int main ()
{
    int a[]={1,2,7,4};
    int size=4;
    cout<<sorted(a,size);
}