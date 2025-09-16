#include <iostream>
#include <Windows.h>
#include <conio.h>
#include<stdlib.h> //rand(), srand()
#include<time.h> //time()

using namespace std;

// entry point
int main()
{
    // [][][][] [][][][] [][][][] ... [][][][]    
    int Map[10][10] = {
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    };
    
    int PlayerX = 1;
    int PlayerY = 1;
    char PlayerShape = 'P';
    while (true)
    {
        int KeyCode = _getch();
        if (KeyCode == 'w')
        {
            PlayerY--;
        }
        else if (KeyCode == 's')
        {
            PlayerY++;
        }
        else if (KeyCode == 'a')
        {
            PlayerX--;
        }
        else if (KeyCode == 'd')
        {
            PlayerX++;
        }

        int X = 0;
        int Y = 0;
            
        system("cls");

        for (Y = 0; Y < 10; Y++)
        {
            for (X = 0; X < 10; X++)
            {
                if (PlayerX == X && PlayerY == Y)
                {
                    cout << PlayerShape;
                }
                else if (Map[Y][X] == 0)
                {
                    cout << ' ';
                }
                else if (Map[Y][X] == 1)
                {
                    cout << '*';
                }
            }
            cout << "\n";
        }
    }
    


    return 0;
}
