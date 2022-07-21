#include<iostream>
#include<math.h>
using namespace std;
int length(char input[])
    {
        if(input[0]=='\0')
        {
            return 0;
        }
        return 1+length(input+1);
    }
int stringToNumber(char input[] , int last)
{
    //  Base Case 
        if(last==0)
            {
                return input[last]-'0';
            }
           
  
            int ans=stringToNumber(input,last-1);
                int ans1=input[last]-'0';
                  return ans*10+ans1;
}

int stringToNumber(char input[])
    {
    int len=length(input);
   return stringToNumber(input,len-1);
    }
int main ()
{
    char input[]={"1234"};
    int len=stringToNumber(input);
    cout<<len;
}