#include<iostream>
using namespace std;
// Dynamic memory allocation
// In dynamic memory allocation their is two type of memory 
    // 1 is stack memory and 2nd is heap memory Generally Stack memory is samaller and heap memory is biger.
    // new keyword will Create memory on heap (That is Dynamically)
    // new will only give the memory address on heap.
    // then by storing the address of the new in pointer we can use the dynamic memory.
    // The scope of the dynamic vaiable will be through out the program untill and unless we
    // Delete the memory by Using deleate keyword. here only dynamically memory is deleated that we 
    // have create during the allocation,
    // but not that memory which we have created in STACK for POINTER. Pointer variable will automaticall get deleted when scope of the variable will over.
    // int *array= new int[size];
int main ()
{
    int* p=new int; // Dynamic allocation of memory in C++ by using new keyword. 
    *p=10;
    cout<<*p<<endl;
    cout<< p << endl;
    delete p; // single Dyanamic Variable delation  
    // Dynamically array memory allocation 
    int * arr= new int[50];

    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int *arr2= new int[n];
    for(int i=0;i<n;i++)
        cin>>arr2[i];

int max=-1;
for(int i=0;i<n;i++)
{
    cout<<arr2[i];
    if(max<arr2[i])
        max=arr2[i];
}
delete []arr2; // This is the method how we Delete dynamic memory allocation of an array 
cout<< max << endl;
for(int i=0;i<n;i++)
{
    cout<<arr2[i];
}
}