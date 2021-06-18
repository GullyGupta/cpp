// challenge 2
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
    int max_turn = 0;

    string playerName[2];
    cout << "Player 1,please enter your name: \n";
    cin >> playerName[0];
    cout << "Thanks and good luck!" << endl;
    cout << "Player 2,please enter your name: \n";
    cin >> playerName[1];
    cout << "Thanks and good luck!" << endl;


    srand(time(0));

    //cout<< "how many chips would you like in your starting pile?\n";

    chipsInpile = (rand() % Max_chips) + 1;
    cout<<"this round will start with "<< chipsInpile << "chips in the pile\n";
    max_turn = (chipsInpile / 2);
    cout<<"you can only take to "<< max_turn << endl;
    chipsTaken = (rand() % max_turn) + 1;

    cout << "Number Taken: " << chipsTaken << endl;
    return 0;
}