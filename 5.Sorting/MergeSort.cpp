/* Merge Sort    */
#include<iostream>
using namespace std;
void merge(int *a,int si,int ei)
{   
    int size=ei-si+1; // first error here
    int mid=(si+ei)/2;
          

    int *a1=new int [size];

  
   
    int i=si;
    int j=mid+1;
    int m=0;
    while(i<=mid && j<= ei)
        {
            if(a[i]<a[j])
                {
                    a1[m]=a[i];
                    i++;
                    m++;
                }
            else
            {
                a1[m]=a[j];
                j++;
                m++;
            }
        }
    while (i<=mid)
    {
        a1[m]=a[i];
        m++;
        i++;
    }
    while (j<=ei)
    {
        a1[m]=a[j];
        m++;
        j++;
    }
    
    int k=0;
    for(int i=si;i<=ei;i++)
        {
            a[i]=a1[k];
            k++;
        }

    delete [] a1;
    return;
}
void merge_sort(int a[], int si,int ei)
{       
    //  Base Case 
    if(si>=ei)
        {
            return;
        }
        int mid=(si+ei)/2;
        merge_sort(a,si,mid);
        merge_sort(a,mid+1,ei);
        merge(a,si,ei);
        

}
void merge_sort(int *a, int size)
{
    int si=0,ei=size-1;
    
    merge_sort(a,si,ei);
    // merge();
    return ;
}

int main ()
{
    int a[]={6,5,4,3,2,1};
    int size=6;
    merge_sort(a,size);
    for(int i=0;i<size;i++)
        {
            cout<<a[i]<<" ";
        }
        

}