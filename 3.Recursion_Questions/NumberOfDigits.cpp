//  number of Digits

#include<iostream>
using namespace std;

int NumberDigit(int n)
    {
            // Base Case 
            if(n<10)
            {
                return(1);
            }
                int count=NumberDigit(n/10);
                return(count+=1);
            

    }
int main ()
{
    int n=156;
    // cin>>n;
    cout<<NumberDigit(n)<<endl;
}