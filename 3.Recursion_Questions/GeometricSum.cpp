// Given k, find the geometric sum i.e.
// 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
// Geometric sum (upto 5 decimal places)
// Sample Input 1 :
// 3
// Sample Output 1 :
// 1.87500
// Sample Input 2 :
// 4
// Sample Output 2 :
// 1.93750

#include<iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double geometricsum(int k)
{
    //  Base Case 
    if(k==0)
    {
        return 1;
    }
    //  Recurcive Call and Small calculation 
    
    return 1/pow(2,k)+geometricsum(k-1);

}

int main ()
{
    int k=3;
    cout<<geometricsum(k);
}

