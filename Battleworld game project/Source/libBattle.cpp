#include "libBattle.h"

namespace BattleSpace{

    // Function for outputting an array
void printArray(int arr[])
{
   for (int i = 0; i < NUM_ITEMS; i++)
    {
                   cout<<arr[i];
    }
}
// Function for pausing the game
void Pause()
    {
        cin.ignore(100,'\n');
        cout << "Press Enter to continue" << endl;
        cin.get();
    }
// Function for random number generation
int GetRand(int intLower, int intUpper)
    {
        int intRange = intUpper - intLower + 1;
        return rand()%intRange + intLower;
    }
    // Function for initialising the array
 void InitPointeraray(int arrNums[])
    {

        for(int i=0;i<NUM_ITEMS;i++)
        {
            arrNums[i] = control;
        }}
//Function for setting pointer in pointer array
void FillPointer (int arrNums[]){
        int intLevel = GetRand(0,NUM_ITEMS-1);
        arrNums[intLevel] = VAL_POINTER;
}
//Function for initiating number array
 void InitNumberarray(int arrNums[]){
        for(int i=0;i<NUM_ITEMS;i++)
        {
            int intPosition = GetRand(0,1);
            arrNums[i] = intPosition;
        }}

       // Outputting game specifications
 void OutputGame(int arrNums[],int arrNum[])
    {
        printArray(arrNum);
        cout << endl;

        //Output the features
        for(int n=0;n<NUM_ITEMS;n++)
        {
            switch(arrNums[n])
            {
            case VAL_POINTER:
                cout << chPointer;
                break;
            case control:
                cout << " ";
                break;
            default:
                cerr<<"This line of code should never execute.  Wrong items in the array" << endl;
            }
        }
        cout << endl;
        //Output the prompt
        cout << "a: Go to the left" << endl;
        cout << "d: Go to the right " << endl;
        cout << "q: Quit" << endl;}
        int FindPointer(int arrNums[])
    {
        int intPosition = -1;
        for(int n=0;n<NUM_ITEMS;n++)
        {
            if(arrNums[n]==VAL_POINTER)
                return n;
        }
        return intPosition;
    }
    //Function for processing movements from user
void ProcessMove(int arrNums[], int intMove,int arrNum[])
    {
        //Find the level of the pilot
        int intPresentposition = -1;
        intPresentposition = FindPointer(arrNums);
        int intNextLevel = intPresentposition;
        if(intPresentposition==-1)
        {
            cerr << "Pointer can't be found. Leaving Program" << endl;
            exit(ERR_POINTER_MISSING);
        }

        //Calculated the destination location
        switch(intMove)
        {
        case GO_RIGHT:
            intNextLevel++;
            break;
        case GO_LEFT:
            intNextLevel--;
            break;
        default:
            cerr << "This shouldn't have happened!" << endl;
        }

        if(intNextLevel>=0 && intNextLevel < NUM_ITEMS)
        {
            arrNums[intNextLevel] = VAL_POINTER;
            arrNums[intPresentposition] = control;
            if (arrNum[intNextLevel]==0){
                arrNum[intNextLevel]=1;
            }
            else {arrNum[intNextLevel]=0;}


                    }}
//Function for telling user they won the game
    bool WinorLose(int arrNums[]){
        int intCount0 = 0;
        int intCount1 = 0;
        bool blnWon = false;
        for(int n=0;n<NUM_ITEMS;n++)
        {
            if(arrNums[n]==1){
                intCount1++;
        }
        else if (arrNums[n]==0){
            intCount0++;
        }
        }
        if (intCount0==20 || intCount1==20){
            blnWon = true;
        }

          return blnWon;          }
    }


