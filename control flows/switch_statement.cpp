#include <iostream>
using namespace std;

int main()
{
    
    int choice;

    cout<<"(1)Do this\n(2)Do that";
    cin>>choice;

    switch (choice) {
        
    case 1: cout<<"I am doing this"; break;

    case 2: cout<<"I am doing that"; break;

    default: cout<<"Well, this is something else"; break;
    
    }
    
    return 0;
}
