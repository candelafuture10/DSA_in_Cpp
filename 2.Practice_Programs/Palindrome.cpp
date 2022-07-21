#include<iostream>
#include<string>
using namespace std;
int main ()
{
 string str,newStr="";
int len;
cin>>str;
for(len=0;str[len]!='\0';++len);
cout<<len<<endl;
for(int i=len-1;i>=0;--i)
    newStr+=str[i];
    cout<<newStr<<endl;
if(str==newStr)
    cout<<"Palindrome"<<endl<<newStr;

else
    cout<<" Not Palindrome"<<endl<<newStr;
return(0);
}