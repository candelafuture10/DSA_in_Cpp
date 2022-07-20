#include<iostream>
using namespace std;

int main ()

{
    int i=65;
    char c=i;     // TypeCasting  
                // Implicitive Type Casting -> Compiler do Automactlly for Usk.
    cout<< c << endl;

    // char *pc=p;
    
    // Explicitive Type Casting 
    int *p=&i;
    char * pc =(char*)p;

    cout<< p << endl; // Address Store in integer pointer p
    cout<<pc<< endl; // It will Print Untill it will get NULL character
    cout<<*p << endl; 
    cout<< *pc << endl;  // Concept of little Endian and Big Endian
    cout<<*(pc+1) << endl; 
    cout<<*(pc+2) << endl;
    cout<<*(pc+3) << endl;
}


