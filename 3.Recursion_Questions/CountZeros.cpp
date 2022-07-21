/* 
Given an integer N, 
count and return the number of zeros that are 
present in the given integer using recursion.
*/

#include<iostream>
using namespace std;

int countzeros(int n )
{   
    //  Base Case 
    if(n<10)
    {
        if(n==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }   
    // 
        
        //  Small Calculation 

        int last=n%10;
        int count=0;
        if(last==0)
            {
                count=1;
            }
            return count+countzeros(n/10);
   

}
int main ()
{
    int n=50001;
    cout<<countzeros(n);
}