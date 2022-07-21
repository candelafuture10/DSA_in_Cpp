#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main ()
{
    // int n;
    // cin>>n;
    string *str= new string;
    int count=0;
    cout<<"Enter the String ";
    cin>>*str;
    cout<<"##"<<*str<<"##";
    for(int i=0;str[0][i]!='\0';i++)
    {
        count+=1;
        // str[i];
        cout<<*str<<endl;
    }
    cout<<count<<endl;
    return(0);

}