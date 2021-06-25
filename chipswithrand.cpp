#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

const int Max_chips=100;
int main()
{
    bool player1turn = true;
    bool gameover = false;
    int chipsInpile = 0;
    int chipsTaken = 0;

    srand(time(0));

    //cout<< "how many chips would you like in your starting pile?\n";

    chipsInpile = (rand() % Max_chips) + 1;
    cout<<"this round will start with "<< chipsInpile << "chips in the pile\n";
    return 0;
}