#include<iostream>
#include<string>
using namespace std;
void reverse(string str)
        {
            if(str.size()==0)
                {
                    return;
                }
                reverse(str.substr(1));
                cout<<str[0];
        }


int main()
{
    string str1;
    getline(cin,str1);
    reverse(str1);
    return(0);
}