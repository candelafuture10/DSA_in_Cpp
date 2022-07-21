#include<iostream>
using namespace std;

int prime( int n);

int main ()
{
   int n;
   cin>>n;
   if(n>=1)
   {
     prime(n); 
   }
   else
   {
     cout<<n<<" is not a Prime number"<<endl;

   }
   return(0);
}
int prime (int n)
{
  int count=0;
  if(n==1)
  count+=1;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      count++;
      // cout<<count;
    }
  }
  if(count==2)
  {
    cout<<n<<" is a Prime number"<<endl;

  }
  else
  {
    cout<<n<<" is not a Prime Number "<< endl;

  }
}