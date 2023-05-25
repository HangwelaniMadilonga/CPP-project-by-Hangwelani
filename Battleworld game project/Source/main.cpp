#include "libBattle.h"
#include <iostream>

using namespace std;
using namespace BattleSpace;

int main()
{
    srand(time(0));
    const int NUM_ITEMS = 20;
    int arrNumbers[NUM_ITEMS];
    int arrPointer[NUM_ITEMS];
    InitNumberarray(arrNumbers);
    InitPointeraray(arrPointer);
    FillPointer(arrPointer);
     bool blnProceed = true;
    bool blnWon = false;
    char chInput = '\0';
    do
    {
        //Output the screen
        system("clear");
        OutputGame(arrPointer,arrNumbers);

        //Get movements from user
        cin >> chInput;

        //Process the movements
        switch(chInput)
        {
        case 'a':
        case 'A':
            ProcessMove(arrPointer,GO_LEFT,arrNumbers);
            break;
        case 'd':
        case 'D':
            ProcessMove(arrPointer,GO_RIGHT,arrNumbers);
            break;
        //Quit the game
        case 'q':
        case 'Q':
            blnProceed = false;
            break;
        default:
            cerr << "Incorrect option, please try again" << endl;
            Pause();
        }

         blnWon = WinorLose(arrNumbers);
        if(blnWon)
            blnProceed = false;
        }


    while(blnProceed);
    //Comments based on if the user wins or not
 if(blnWon)
    {
        cout << "*********************************************************" << endl;
        cout << "*    Congratulations! you changed all the numbers  :-D  *" << endl;
        cout << "*********************************************************" << endl;
    }
    else
    {
        cout << "*********************************************************" << endl;
        cout << "*            You quit the game!!  :-(                   *" << endl;
        cout << "*********************************************************" << endl;
    }




    return 0;
}
