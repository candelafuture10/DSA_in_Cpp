#include<iostream>
using namespace std;
int partation(int input[],int start,int end)
{
    int x=input[start];
    int lessx=0;
    for(int i=start+1;i<=end;i++)
    {
        if(input[i]<=x)
        {
            lessx+=1;
        }
    }
    int position=lessx+start;
    int temp=input[start];
        input[start]=input[position];
        input[position]=temp;
    int i=start;
    int j=end;

    while(i<=position && j>=position)
        {
            if(input[i]<=x)
            {
                i++;
            }
            else if(input[j]>x)
            {
                j--;
            }
            else
            {
                int swap=input[i];
                input[i]=input[j];
                input[j]=swap;
                i++;
                j--;
            }
        }
        return position;
    
}
void quicksort(int *input,int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int position=partation(input,start,end);
        quicksort(input,start,position-1);
        quicksort(input,position+1,end);
}
void quicksort(int input[],int size)
{       int end=size-1;
    quicksort(input,0,end);
    
return; 
}
int main ()
{
    int input[]={6,5,4,3,2,1};
    int size=6;
    quicksort(input,size);
    for(int i=0;i<size;i++)
    {
        cout<<input[i]<<" ";
    }
}