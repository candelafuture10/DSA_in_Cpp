//  Passs By Value and Pass by Reference
#include<iostream>
using namespace std;

void increment( int & i)        // Pass by Reference 
        {               
            i++;
        }
        // bad Practice 
int & f(int n)              // Return By Reference 
        {
            int a=n;
            return a;
        }
// Pointer Return
// bad Practice 
int * f2()
        {
            int  i=10;
            return &i;
        }
int main ()
{
    int * p= f2();

    int i;
    i=10;
    int& k1=f(i);
    increment(i);
    cout<<i<<endl;
   int & j=i;
   i++;
   cout<<j<<endl;
   j++;
   cout<<i<<endl;
   int k=100;
   j=k;
   cout<<i<<endl;



    

}