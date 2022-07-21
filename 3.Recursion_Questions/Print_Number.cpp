#include<iostream>

using namespace std;

void Print_Number(int n)
{
    // Base Case 
    if(n==1){
    cout<<n<<" ";
    return;
    }
    
    Print_Number(n-1);
        cout<<n<<" ";
}

int main()
{
    int n=9;
    // cin>>n;
    Print_Number(n);

}