#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
  int computer = (rand() % 3) + 1;//choose between 1:3
  int human;

  do{
  srand(time(0));//reset the seed every time the program run!
  cout << "\n";
  cout << "==========================\n";
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
  else if (computer == 1 && human == 2 || computer == 2 && human == 3 || computer == 3 && human == 1)
  {
    cout << "Computer choose " << computer << endl;
    cout << "You Win !";
  }
  else if (computer == 1 && human == 3 || computer == 2 && human == 1 || computer == 3 && human == 2)
  {
    cout << "Computer choose " << computer << endl;
    cout << "You faild , computer wins !";
  }

  else { cout << "Choose 1 or 2 or 3 only"; }
  } while (true);

  return 0;


}
