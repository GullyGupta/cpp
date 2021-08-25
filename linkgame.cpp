#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
string FindPlayerName(string names[], bool PlayerTurn);
int askMove(bool PlayerTurn, int ChipsInPile, string names[]);
void getUserNames(string Players[]);

const int Max_chips=100;
const float Max_turn= 2;
int main()
{
    bool player1turn = true;
    bool gameover = false;
    int chipsInpile = 0;
    int chipsTaken = 0;
    int maxPerturn = 0;
    char userChoice;
    string playerNames[2];
    
    


    srand(time(0));
    getUserNames(playerNames);

    //cout<< "how many chips would you like in your starting pile?\n";
    do
    {
    chipsInpile = (rand() % Max_chips) + 1;
    cout <<"this round will start with "<< chipsInpile << "chips in the pile\n";
    gameover = false;
    while (gameover == false)
    {
     do
     {
       maxPerturn = (chipsInpile / Max_turn); 
       if(player1turn)
      {
        cout << playerNames[0] << " How many chips would you like? \n";
      }
      else
      {
        cout << playerNames[1] << " How many chips would you like? \n";      
      }
      cout<<"you can only take ";
      if(maxPerturn == 0)
      {
         cout << " 1\n";
      }
      
      else
     {
        cout<< maxPerturn << endl;
     }

     cin >> chipsTaken;
     } while ((chipsTaken > maxPerturn ) && (chipsInpile > 1));
    
      chipsInpile = chipsInpile - chipsTaken;
      cout << "there are "<< chipsInpile << " left in the pile\n";
      if(chipsInpile == 0)
      {
          gameover = true;
           if(player1turn)
      {
        cout << playerNames[1] << ", Congratulations! you won. \n";
      }
      else
      {
        cout << playerNames[0] << " Congratulations! you won.  \n";      
      }
      }
      else
      {
          player1turn = !player1turn; 

      }
    
    } 
    cout << "Do you wish to play again? (Y/N)\n";
    cin >> userChoice;
    userChoice=toupper(userChoice);
}while (userChoice == 'Y');
    return 0;
}
void getUserNames(string Players[])
{
    cout << "Player 1,please enter your name: \n";
    cin >> Players[0];
    cout<<"\nThanks & Good Luck"<<endl;
    cout << "Player 2,please enter your name: \n(If you wish to play against computer enter AI\n";
    cin >> Players[1];
    cout<<"\nThanks & Good Luck"<<endl;

}