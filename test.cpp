// Replace Pi
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

void replacepi(char input[])
    {
        if(input[0]=='\0'||input[1]=='\0')
            {
                return;
            }
            if(input[0]=='p' &&input[1]=='i')
                {
                    int len=length(input);
                    input[len+2]='\0';
                    for(int i=len-1;i>=2;i--)
                        {
                            input[i+2]=input[i];
                        }
                        input[0]='3';
                        input[1]='.';
                        input[2]='1';
                        input[3]='4';
                        replacepi(input+4);


                }
                else
                    {
                        replacepi(input+1);
                    }
    }

int main ()
{
    char input[]="xpixpi";
    replacepi(input);
    cout<<input<<endl;
    
}