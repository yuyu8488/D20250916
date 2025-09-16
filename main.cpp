#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;


// entry point
int main()
{
    int Temp = 0;
    
    // 의도가 분명하게 작성
    Temp = (10 + 10);
    Temp = Temp - (10 * 10) / 10 % 10;
       
    int DefaultMalrangCowCount = 30;
    int TodayEatCount = 1;
    int CurrentMalrangCowCount = DefaultMalrangCowCount - TodayEatCount;

    //cout << "Default MalrangCow  Count: " << DefaultMalrangCowCount << endl;
    //cout << "Today Eat Count: " << TodayEatCount << endl;
    //cout << "Current MalrangCow Count: " << CurrentMalrangCowCount;
    
    // 문자를 숫자로 인식.
    char C = 'A';
    //char  = 65;
    // >> A;
    int Gold = 1;
        
    //cout << C << endl << endl; 

    // Input -> Process -> Render
    int PlayerX = 0;
    int PlayerY = 0;
    bool bIsRunning = true;

    while (bIsRunning)
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
        else if (KeyCode == 'q')
        {
            bIsRunning = false;
        }

        system("cls");

        COORD Cur;
        Cur.X = PlayerX;
        Cur.Y = PlayerY;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

        std::cout << "P" << endl;
    }

  
    return 0;
}

