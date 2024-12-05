/*
#include <iostream>
#include <Windows.h>
using namespace std;

//Create the tetrominoes(The Pieces)
wstring tetromino[7];

//Create window and play zone
int WindowWitdh = 80;
int WindowHeight = 30;
int fieldWidth = 12;
int fieldHeight = 18;

unsigned char *pField = nullptr;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");


    tetromino[1].append(L"..X.");
    tetromino[1].append(L"..X.");
    tetromino[1].append(L"..XX");
    tetromino[1].append(L"....");


    tetromino[2].append(L"..X.");
    tetromino[2].append(L"..X.");
    tetromino[2].append(L".XX.");
    tetromino[2].append(L"....");


    tetromino[3].append(L".XX.");
    tetromino[3].append(L"..XX");
    tetromino[3].append(L"....");
    tetromino[3].append(L"....");


    tetromino[4].append(L"..XX");
    tetromino[4].append(L".XX.");
    tetromino[4].append(L"....");
    tetromino[4].append(L"....");


    tetromino[5].append(L"....");
    tetromino[5].append(L".XXX");
    tetromino[5].append(L"..X.");
    tetromino[5].append(L"....");


    tetromino[6].append(L".XX.");
    tetromino[6].append(L".XX.");
    tetromino[6].append(L"....");
    tetromino[6].append(L"....");

    bool gameOver = false;

    while (!gameOver) {
        wchar_t *screen = new wchar_t[WindowHeight*WindowWitdh];
        for (int i = 0; i < WindowHeight*WindowWitdh; i++) screen[i] = L' ';
        HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
        SetConsoleActiveScreenBuffer(hConsole);
        DWORD dwBytesWritten = 0;

        pField = new unsigned char[fieldWidth*fieldHeight]; // Create play field buffer
        for (int x = 0; x < fieldWidth; x++) // Board Boundary
            for (int y = 0; y < fieldHeight; y++)
                pField[y*fieldWidth + x] = (x == 0 || x == fieldWidth - 1 || y == fieldHeight - 1) ? 9 : 0;


        for (int i = 0;i < WindowWitdh; i++) {
            for (int j = 0;j < WindowWitdh; j++) {
                screen[(j + 2) * WindowWitdh + (i + 2)] = L" ABCDEF=#"[pField[j*fieldWidth + i]];
            }
        }
    }
}
*/
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.

