#include "Utils.h"
#include <windows.h>
#include <conio.h>

void Utils::drawPoint(int x, int y)
{
    printf("\033[%d;%dH", y+1, x*2+1);
    printf("\033[1;36m■ \033[0m");
}

char Utils::myget()
{
    char key = -1;
    if(_kbhit())
    {
        key = _getch();
    }
    return key;
}
