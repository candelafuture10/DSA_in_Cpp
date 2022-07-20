#include<iostream>
#include<string>
using namespace std;

void increment (int& i)
    {
        i++;
    }
// bad Practice
int& f(int n)
    {
        int a=n;
        return a;
    }
// bad Practice 
int* f2()
    {
        int i=10;
        return &i;
    }

int main ()
{
    int* p=f2();
    int i;
    i=10;
    int& k1=f(i);

    increment(i);
    cout<<i<<endl;
    int& j=i;
    i++;


}