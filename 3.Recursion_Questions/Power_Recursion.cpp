#include<iostream>

using namespace std;
 
 int power(int x , int n)
 { int pow=0;
   if(n==0)
   return(1);
   if(n==1)
   return(x);
   else return(pow=x*(power(x,n-1)));
     cout<<pow<<" "<<endl;

 }
 int main ()
 {
int x=0,n=5;

cout<<"Enter Number and POWER"<<endl;
// cin>>x>>n;
cout<<power(x,n);
return(0);
 }


  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    // {
    //    if(x==0 && n==0)
    //    {
    //        return 1;
    //    }
    //    if(x==0)
    //     {
    //         return 0;
    //     }

    //     int smallAns =power(x,n/2);
    //         if(n%2==0)
    //         {
    //             return smallAns*smallAns;
    //         }
    //         else
    //         {
    //             return x*smallAns*smallAns;
    //         }
    // }