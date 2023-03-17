#include <iostream>
using namespace std;

/*
    Now do it yourself for the others operators
*/

int addition(){
    int a;
    int b;
    int c;

    cout<<"\nEnter a first number: ";
    cin>>a;

    cout<<"\nEnter a second number: ";
    cin>>b;

    c = a+b;

    return c;
}

int main()
{
    
    int result = addition();
    cout<<"\nThe result is "<<result;
    
    cout<<"\n\n";
    return 0;
}
