// Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
// Do this recursively. Indexing in the array starts from 0.
#include<iostream>
using namespace std;

int AllIndex(int input[],int n,int x,int output[])
{   
    //  Base Case 
    if(n==0)
    {
        return 0;
    }
    int ans=AllIndex(input,n-1,x,output);
        if(input[n-1]==x)
        {
            output[ans]=n-1;
            return ans+=1;
        }
        else
            return ans;

}

int main ()
{
    int n;
    cin>>n;

    int *input= new int [n];
    for (int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    int x;
    cin>>x;
    int *output=new int [n];
    int size= AllIndex(input,n,x,output);
    for(int i=0;i<size;i++)
    {
        cout<<output[i]<<" ";
    }
    delete [] input;
    delete [] output;
}