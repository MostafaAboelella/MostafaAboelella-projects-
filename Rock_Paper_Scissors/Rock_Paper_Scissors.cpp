#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
int computer = (rand() % 3)+1;//choose between 1:3
int human;
srand(time(0));//reset the seed every time the program run!
cout << "Welcome to Rock & Paper & Scissors \n";
cout << "Rock --> 1\n";
cout << "Paper --> 2\n";
cout << "Scissors --> 3\n";
cin >> human;
cin.ignore();
if (computer == human)
{
    cout << "Draw !";
}
else if (computer == 1 && human == 2)
{
    cout << "You Win !";
}
else if (computer == 1 && human == 3)
{
    cout << "You faild , computer wins !";
}
else if (computer == 2 && human == 1)
{
    cout << "You faild , computer wins !";
}
else if (computer == 2 && human == 3)
{
    cout << "You Win !";
}
else if (computer == 3 && human == 2)
{
    cout << "You faild , computer wins !";
}
else if (computer == 3 && human == 1)
{
    cout << "You Win !";
}
else { cout << "Choose 1 or 2 or 3 only"; }





return 0;





}