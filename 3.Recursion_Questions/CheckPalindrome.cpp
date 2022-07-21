// Check Palindrome (recursive)

/*Check whether a given String S is a palindrome using recursion. 
Return true or false.  */
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

Check(char input[],int start,int end)
{
    if(start>=end)
    {
        return true;
    }
    if(input[start]!=input[end])
        {
            return false;
        }
        if(start<end)
        {
            Check(input,start+1,end-1);
        }

}

int CheckPalindrome(char input[])
{
        int end=0;
        end=strlen(input);
        if(end==0)
            {
                return 0;
            }
        else
            {
                return (Check(input,0,end-1));
            }
}
int main ()
{
    char input[]="abcbaq";
    if(CheckPalindrome(input))
        {
            cout<<"True"<<endl;
        }
    else
        {
            cout<<"False"<<endl;
        }
}