//  how to find Length of a String using Recursion
#include<iostream>
using namespace std;

int length( char str[])
{
//  Base Case 
        if(str[0]=='\0')
        {
            return 0;
        }
        return 1+length(str+1);

}
int main ()
{
    char str[50];
    cin>>str;
    cout<<length(str);
}