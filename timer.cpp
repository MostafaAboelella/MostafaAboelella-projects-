#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int min;
    int sec;
    
    cout<<"Enter the minutes :";
    cin>>min;
    cout<<"\n";
    cout<<"Enter the sec :";
    cin>>sec;
    
    while(1)
    {
        system("cls");
        if(min<=0&&sec<=0)
        {
        cout<<"End";
        break;
        }      
        else if(sec==0)
        {
            min--;
            if(min==0){sec=59;}      
        }
        sec--;
        cout<<"the remaining time : "<< min <<" minutes : "<<sec<<" secondes " ;
        
        Sleep(1000);
        
       

    }
    

}

