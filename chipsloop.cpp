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
    if(player1turn)
    {
        cout << playerName[0] << " How many chips would you like? \n";
    }
    else
    {
        cout << playerName[1] << " How many chips would you like? \n";      
    }
    cout<<"you can only take "<< static_cast<int>(chipsInpile / Max_turn) << endl;
    cin >> chipsTaken;
    return 0;
}