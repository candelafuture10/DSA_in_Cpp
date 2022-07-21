#include<iostream>
#include<string>
using namespace std;
int main ()
{
string str="";
int len;
cin>>str;
for(len=0; str[len]!='\0';len++);
cout<<len<<endl;
for(int i=len-1;i>=0;i--)
cout<<str[i];


return (0);
}