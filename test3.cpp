//  Remove X
#include<iostream>
using namespace std;

int length(char input[])
{
    if(input[0]=='\0')
        {
            return 0;
        }
    return 1+length(input+1);
}

void RemoveX(char input[])
    {
        if(input[0]=='\0')
            {
                return ;
            }
            if(input[0]=='x')
                {
                    int len=length(input);
                    int i;
                    for(i=1;i<len;i++)
                    {
                        input[i-1]=input[i];
                    }
                    input[i-1]='\0';
                }
                RemoveX(input+1);
    }

int main ()
{
    char input[]="xabx";

    RemoveX(input);
    cout<<input<<endl;
}