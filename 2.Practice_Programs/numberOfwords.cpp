#include<iostream>
#include<string>
using namespace std;

int main ()
{
    string str;
    int count=0;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        
        if(str[i] ==' ')
            count+=1;
    }
    cout<<"Number of Words Present in Line "<<count+1;
return(0);
}