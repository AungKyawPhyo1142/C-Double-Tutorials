#include <iostream>
using namespace std;

/*
    - since do-while-loop doesn't check the condition for the first time, the inital value of choice doesn't matter
    - but after that, as long as the user input 'y' the loop goes on
*/

int main()
{
    char choice;

    do{

        cout<<"\nHi.";

        cout<<"\nDo you want to print again?\n(y/n): ";
        cin>>choice;


    }while(choice=='y');
    
    cout<<"\n\n";
    return 0;
}
