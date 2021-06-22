#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

const int Max_chips=100;
const float Max_turn= 2;
int main()
{
    bool player1turn = true;
    bool gameover = false;
    int chipsInpile = 0;
    int chipsTaken = 0;

    string playerName[2];
    cout << "Player 1,please enter your name: \n";
    cin >> playerName[0];
    cout << "Player 2,please enter your name: \n";
    cin >> playerName[1];


    srand(time(0));

    //cout<< "how many chips would you like in your starting pile?\n";

    chipsInpile = (rand() % Max_chips) + 1;
    cout<<"this round will start with "<< chipsInpile << "chips in the pile\n";
    while (gameover == false)
    {
     do
     {
    
       if(player1turn)
      {
        cout << playerName[0] << " How many chips would you like? \n";
      }
      else
      {
        cout << playerName[1] << " How many chips would you like? \n";      
      }
      cout<<"you can only take ";
      if(static_cast<int>(chipsInpile / Max_turn) == 0)
      {
         cout << " 1\n";
      }
      
      else
     {
        cout<< static_cast<int>(chipsInpile / Max_turn) << endl;
     }

     cin >> chipsTaken;
     } while (chipsTaken > (static_cast<int>(chipsInpile / Max_turn)) && (chipsInpile > 1));
    
      chipsInpile = chipsInpile - chipsTaken;
      cout << "there are "<< chipsInpile << " left in the pile\n";
      if(chipsInpile == 0)
      {
          gameover = true;
           if(player1turn)
      {
        cout << playerName[1] << ", Congratulations! you won. \n";
      }
      else
      {
        cout << playerName[0] << " Congratulations! you won.  \n";      
      }
      }
      else
      {
          player1turn = !player1turn; 

      }
    } 
    return 0;
}