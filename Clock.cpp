#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    //varibles
    int hour ;
    int min ;
    int sec ;
    //end of varibles
    
    cout<<"Enter the Hours : ";
    cin>>hour;
    cout<<"\n";
    cout<<"Enter the minutes : ";
    cin>>min;
    cout<<"\n";
    cout<<"Enter the secondes : ";
    cin>>sec;
    
    while(true)
    {
        system("cls"); // this clear the system and let the newest thing !
        if(sec==59)
        {
            min++;
            sec=0;
        }
        if(min==59)
        {
            hour++;
            min=0;
        }
        if(hour==12)
        {
            hour=0;
        }
    
        cout<<hour<<":"<<min<<":"<<sec;
        sec++;
        Sleep(1000); // make a delay after while sentance apply again & but it needs a <windows.h> library
    }
    







}