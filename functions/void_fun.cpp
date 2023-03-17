#include <iostream>
using namespace std;

/*

    Now do it yourself for (-), (*), (/), (%)

*/

void addition(){
    int a;
    int b;
    int c;

    cout<<"\nEnter a first number: ";
    cin>>a;

    cout<<"\nEnter a second number: ";
    cin>>b;

    c = a+b;

    cout<<"\nYour answer is "<<c;
}

int main()
{
    addition();
    
    cout<<"\n\n";
    return 0;
}
