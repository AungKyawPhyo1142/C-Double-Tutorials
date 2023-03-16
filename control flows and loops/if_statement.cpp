#include <iostream>
using namespace std;

int main()
{
    
    int choice;

    cout<<"What is your favourite?";
    cout<<"\n(1)Chocolate";
    cout<<"\n(2)Pizza";
    cout<<"\n(3)Steak: ";
    cin>>choice;

    if(choice==1){
        cout<<"\nYour fav is Chocolate";
    }
    else if (choice==2)
    {
        cout<<"\nYour fav is Pizza";
    }
    else{
        cout<<"\nYour fav is Steak";
    }
    
    
    return 0;
}
