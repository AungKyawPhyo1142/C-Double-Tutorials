# Standard Input and Output

Unlike the others, C++ use this following header file for basic input and output:
```
#include<iostream>
```
Since we are doing a beginner friendly guide, we're gonna skip other details. So, for a moment, let's just say we write the following codes for input and output:
```
#include<iostream>
using namespace std;
```

In C++, 'cout' is used to print the the texts and 'cin' is used for user input.
So, let's say you want to print "Hello World" 'cause why not:3

```
cout<<"Hello World";
```

For the user input, we use 'cin'

```
int x;

cout<<"Enter a number: ";               // print out to the terminal
cin>>x;                                 // store user input inside a variable called 'x'

cout<<"Your input number is"<<x;        // print out the value of 'x'
```
Here, << and >> are called 'insertion operators' and used for output and extraction respectively. However, I want you to just memorize that this is how we do input and output in C++ because I just don't want you to confuse.