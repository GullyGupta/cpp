#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    bool player1turn = true;
    bool gameover = false;
    int chipsInpile = 0;
    int chipsTaken = 0;

    cout<< "how many chips would you like in your starting pile?\n";
    cin>> chipsInpile;
    cout<<"this round will start with "<< chipsInpile << "chips in the pile\n";
    return 0;
}