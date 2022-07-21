#include<iostream>
#include <string.h>
#include<math.h>
using namespace std;

int subsequences(string input,string output[])
{
    //  Base Case 
    if(input.empty())
        {
            output[0]="";
            return 1;
        }
        string smallString=input.substr(1);
        int smallOutputSize=subsequences(smallString,output);
        for(int i=0;i<smallOutputSize;i++)
        {
            output[i+smallOutputSize]=input[0]+output[i];
        }
        return 2*smallOutputSize;
}

int main ()
{
    string input;
    cin>>input;
    int len=input.size();
    len=pow(len,2);
    cout<<len;
    string *output=new string[len];
    int count =subsequences(input,output);
        for(int i=0;i<count;i++)
        {
            cout<<output[i]<<endl;
        }
    
}