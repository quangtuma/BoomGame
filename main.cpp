#include "main.h"

using namespace std;

/*
 ___________________    * X |-----------------------------------| 
|                   |   * X |                                   |
|                   |   * X |                                   |
|                   |   * X |                                   |
|___________________|   * X |-----------------------------------|
*/

void gotoxy(short x, short y)
{
    static HANDLE h = NULL;  
    if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };  
    SetConsoleCursorPosition(h,c);
}

void drawMap()
{
    // draw rows
    for (int y = Y0; y <= M; ++y)
    {
        gotoxy(X0, y);
        cout << "|";
        gotoxy(N, y);
        cout << "|";
    }
    // draw columns
    for (int x = X0 + 1; x < N; ++x)
    {
        gotoxy(x, Y0);
        cout << "-";
        gotoxy(x, M);
        cout << "-";
    }
}

char checkInput()
{
    char ch;
    if (kbhit())
    {
        ch = getch();
        if (ch == 0) ch = getch();
    }
    return ch;
}

void moveCursor(short &x, short &y, char ch)
{
    switch (ch)
    {
    case ARROW_UP:
        if (y > 2) --y; break;
    case ARROW_DOWN:
        if (y < M - 1) y++; break;
    case ARROW_LEFT:
        if (x > 1) --x; break;
    case ARROW_RIGHT:
        if (x < N - 1) ++x; break;
    default:
        break;
    }
}

int main()
{
    system("cls");
    short i = X0 + 1, j = Y0 + 1;
    Sleep(500);
    cout << "Initializing..." << endl;
    Sleep(500);
    cout << "Start..";
    Sleep(500);
    drawMap();
    Balloon ball;
    ball.SetColor(20);
    char sign = ball.GetSign();

    while (true)
    {
        char ch = checkInput();
        
        if (ch == SPACE)
        {
            cout << sign;
            gotoxy(i, j);
            continue;
        }
        moveCursor(i, j, ch);
        gotoxy(i, j);
        if (ch == 27) break;
        Sleep(10);
    }
    
    ball.~Balloon();
    return 0;
}
