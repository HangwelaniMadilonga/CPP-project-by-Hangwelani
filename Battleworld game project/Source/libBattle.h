#ifndef LIBBATTLE_H_INCLUDED
#define LIBBATTLE_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
namespace BattleSpace {


const int ZERO = 0;
const int ONE = 1;
const int NUM_ITEMS = 20;
const int GO_RIGHT = 1;
const int GO_LEFT = 2;
const int VAL_POINTER = 1;
const char chPointer = '^';
const int control = 9;
const int ERR_POINTER_MISSING = -1;
void Pause();
int GetRand(int intLower, int intUpper);
void ProcessMove(int arrNums[], int intMove,int arrNum[]);
int Locatepointer (int arrNums[]);
bool WinorLose(int arrNums[]);
void printArray(int arr[]);
void InitPointeraray(int arrNums[]);
void InitNumberarray(int arrNums[]);
void FillPointer (int arrNums[]);
void OutputGame(int arrNums[],int arrNum[]);
int FindPointer(int arrNums[]);

}

#endif // LIBBATTLE_H_INCLUDED