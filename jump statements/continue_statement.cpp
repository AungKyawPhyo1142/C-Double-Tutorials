#include <iostream>
using namespace std;

/*

    continue-statement is used when you want to skip the current iteration
    here, when i is equal to 6, it'll skip this iteration and instantly go to 7

*/

int main()
{
    
    for(int i=1; i<=10; i++){
        if(i==6){
            continue;
        }
        else{
            cout<<"i="<<i<<" ";
        }
    }
    
    cout<<"\n\n";
    return 0;
}
