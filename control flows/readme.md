# Control Flows and Loops
Control flows and loops are both fundamentals and important topics in C++.

## if-statement
<hr>

Before going into if-statment directly, let's talk about something in our real lives. In English, when we want to introduce a conditional clause or a hypothetical situation. For example, your girlfriend saying 'Would you still love me if I was a worm?'.
In C++, if-statement also has the same meaning. If it is something, do this. If not, do that.

### Generic Syntax Form of if-statement

if (condition) {
    statement;
}

```
int choice;

cout<<"Will you marry me?";
cout<<"(1)Yes";
cout<<"(2)No";
cout<<"Lol, OK = ";
cin>>choice;

if(choice==1){
    cout<<"Wow, congrats";
}
else if(choice==2){
    cout<<"Hmmm, Sad";
}
else{
    cout<<"Welp, good luck";
}
```

## switch-statement
switch-statement is kind of similar to if-statement. If it is this, do this, if not, do that. But it is written alittle bit different. It is limited to constant expressions and is mainly used to check for a value among a number of possible expressions

### Generic Syntax Form of switch-statement

```
switch (expression)
{
  case constant1:
    group-of-statements-1;
  break;

  case constant2:
    group-of-statements-2;
  break;
  ...
  default:
    default-group-of-statements;
  break;
}
```