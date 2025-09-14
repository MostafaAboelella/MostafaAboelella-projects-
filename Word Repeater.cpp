#include <iostream>
#include <windows.h>
using namespace std;
void spam(string word , int num , int delay)
{
 for (int i = 0; i < num ; i++)
 {
   cout<<word<<endl;
   Sleep(delay);
 }
 cout<<"We wrote \""<<word<<"\" , \""<<num<<"\" times "<<" , "<<"with delay \""<<delay<<"\""<<endl;
 cout<<"The End !";
}
int main()
{
string word;
int num ;  
int delay;

cout<<"Welcome to text spam app \n";
cout<<"==================================\n";
cout<<"Enter the word you wanna spam : ";
getline(cin,word);
cout<<"\n";
cout<<"Enter how many times you want spam it : ";
cin>>num;
cin.ignore();
cout<<"\n";
cout<<"Enter the delay between the word and athor (1000 = 1sec) : ";
cin>>delay;
cin.ignore();

cout<<"\n";
spam(word,num,delay);

return 0;
}
