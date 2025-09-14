#include <iostream>
#include <cmath>
using namespace std;
double sum(double x ,double y)
{
    cout<<"the sum result of x+y is : "<<x+y;
    cout<<"\n";

    return x+y;
}
double sub(double x ,double y)
{
    cout<<"the sub result of x-y is : "<<x-y;
    cout<<"\n";

    return x-y;
}
double mult(double x ,double y)
{
    cout<<"the multiply result of x*y is : "<<x*y;
    cout<<"\n";

    return x*y;
}
double divide(double x ,double y)
{
    cout<<"the devide result of x/y is : "<<x/y;
    cout<<"\n";

    return x/y;
}
double power(double x ,double y)
{
    cout<<"the power result of x^y is : "<<pow(x,y);
    cout<<"\n";

    return pow(x,y);
}
double sin(double x )
{
    cout<<"the devide result of sin(x) is : "<<sin(x);
    cout<<"\n";

    return sin(x);
}
double cos(double x )
{
    cout<<"the devide result of cos(x) is : "<<cos(x);
    cout<<"\n";

    return cos(x);
}
double tan(double x )
{
    cout<<"the devide result of tan(x) is : "<<tan(x);
    cout<<"\n";

    return tan(x);
}

int main()
{
    int op ;
    double x,y;
    char again;
    do
    {
    cout<<"Welcome to the Calculator app 🧮\n";
    cout<<"=================================\n";
    cout<<"Choose your operation you want ! :\n ";
    cout<<"Sum -> 1\n";
    cout<<"substruct -> 2\n";
    cout<<"multiply -> 3\n";
    cout<<"divide -> 4\n";
    cout<<"power -> 5\n";
    cout<<"sin(x) -> 6\n";
    cout<<"cos(x) -> 7\n";
    cout<<"tan(x) -> 8\n";
    cin>>op;
    
    
    switch (op)
    {
    case 1:
        cout<<"Enter your first number : ";
        cin>>x;
        cout<<"Enter your seconde number : ";
        cin>>y;
        sum(x,y);
        break;
    
    case 2:
        cout<<"Enter your first number : ";
        cin>>x;
        cout<<"Enter your seconde number : ";
        cin>>y;
        sub(x,y);
        break;
    
    case 3:
        cout<<"Enter your first number : ";
        cin>>x;
        cout<<"Enter your seconde number : ";
        cin>>y;
        mult(x,y);
        break;
    
    case 4:
        cout<<"Enter your first number : ";
        cin>>x;
        cout<<"Enter your seconde number : ";
        cin>>y;
        divide(x,y);
        break;
    
    case 5:
        cout<<"Enter your first number : ";
        cin>>x;
        cout<<"Enter your seconde number : ";
        cin>>y;
        power(x,y);
        break;
    
    case 6:
        cout<<"Enter your corner number : ";
        cin>>x;
        sin(x);
        break;
    
    case 7:
        cout<<"Enter your corner number : ";
        cin>>x;
        cos(x);
        break;
    case 8:
        cout<<"Enter your corner number : ";
        cin>>x;
        tan(x);
        break;
    
    default: cout<<"Incorrect operation ! ";
        break;
    }
    cout<<"\n";
    cout<<"===============================================\n";
    cout<<"Do you want another operation ? y or n ?";
    cin>>again;    
} while (again=='y');
}