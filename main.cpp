#include <iostream>

using namespace std;

int main()
{
    int Temp = 0;
    
    // 의도가 분명하게 작성
    Temp = (10 + 10);
    Temp = Temp - (10 * 10) / 10 % 10;
       
    int DefaultMalrangCowCount = 30;
    int TodayEatCount = 1;
    int CurrentMalrangCowCount = DefaultMalrangCowCount - TodayEatCount;

    cout << "Default MalrangCow  Count: " << DefaultMalrangCowCount << endl;
    cout << "Today Eat Count: " << TodayEatCount << endl;
    cout << "Current MalrangCow Count: " << CurrentMalrangCowCount;
    
    return 0;
}

