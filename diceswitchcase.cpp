#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    int dice =0;
    srand(time(0));

    dice = (rand() % 6)+1;
    cout << "You rolled a " << dice << endl;
    switch( dice )
    {
        case 1: cout << "one \n";
        break;
        case 2: cout << "two \n";
        break;
        case 3: cout << "three \n";
        break;
        case 4: cout << "four \n";
        break;
        case 5: cout << "five \n";
        break;
        case 6: cout << "six \n";
        break;

        default: cout << "invalid \n";
        break;

    }

    return 0;

}