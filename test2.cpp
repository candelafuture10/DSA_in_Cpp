#include<iostream>
#include<string>
#include<cstring>
using namespace std;

// int Slength(char input[])
//     {
//             int i;
//         for(i=1;i<'\0';i++);
//         return i;
//     }

int Check(char input[],int start, int end)
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
             Check(input,start+1,end-1);

        return true;  
            
}


int CheckPalindrome(char input[])
{
     // int len=Slength(input);
        int end=0;
        end=strlen(input);
        if(end==0)
            {
                return true;
            }
        else
        {
            return Check(input,0,end-1);
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