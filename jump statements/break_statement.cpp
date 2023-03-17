#include <iostream>
using namespace std;

/*
    break-statement is used to completely break from the current loop or switch-condition
    here, the loop will only do for 5 times and when i is 6, it'll completely breaks from the loop
*/

int main()
{
    for(int i=1;i<=10;i++){
        if(i==6){
            break;
        }
        else{
            cout<<"i="<<i<<" ";
        }
    }
    
    cout<<"\n\n";
    return 0;
}
