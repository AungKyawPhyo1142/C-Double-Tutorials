#include <iostream>
using namespace std;

int main()
{
    
    int menu;
    int qty, price, totalCost=0;

    cout<<"\n\t\tWelcome From Our Restaurant";
    cout<<"\n(1)BBQ Pizza (20$)";
    cout<<"\n(2)Sushi (10$)";
    cout<<"\n(3)Orange Juice (5$)\n= ";
    cin>>menu;

    cout<<"\nHow many do you want?: ";
    cin>>qty;

    if(menu==1){
        price=20;
    }
    else if(menu==2){
        price=10;
    }
    else{
        price=5;
    }

    totalCost = qty * price;

    cout<<"\nYour total cost is "<<totalCost<<"$";

    cout<<"\n\n";
    return 0;
}
