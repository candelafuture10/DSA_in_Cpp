// Default pointer Accessing and what it will give and we are going to update the Pointer 
// But UPdating the default Pointer is very dangaures 
#include <iostream>
using namespace std;
int main()
{
    // checking default value in a int type variable 

    int i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    //Checking  default type value in Pointer 
    int *p;
    cout<<*p<<endl;
    (*p)++;
    cout<<*p<<endl;
    (*p)--;
    cout<<*p<<endl;
    

}