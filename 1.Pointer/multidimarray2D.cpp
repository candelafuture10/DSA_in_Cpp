// Dynamically Allocation of 2D arrays in C++
#include<iostream>
using namespace std;

int main ()
{
    int n,m;
    cout<<" Give Row and Coloum"<<endl;  // Creating 2D array n x m;
    cin>>n>>m;
    int **p=new int *[m];
    for(int i=0;i<m;i++)
    {
        p[i]=new int[n];
        for(int j=0;j,n;j++)
        {
            cin>>p[i][j];

        }
    }
    // after Creating 2D array Dynamically we have to Delete the 2D array also 

      for (int i=0;i<m;i++)
      {
          delete [] p[i];
      }
      delete[] p;
}