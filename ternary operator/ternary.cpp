#include <iostream>
using namespace std;

/*

    as you can see, just like if-statement,
    if the condition is true, do the first
    if not, do the second one.

*/

int main()
{
    
    int a=5;
    int b=6;
    string ans;

    ans = (a>b) ? "a is larger than b" : "b is larger than a";

    cout<<"\n"<<ans;

    cout<<"\n\n";
    return 0;
}
