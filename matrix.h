#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int arrA[10][10];
int arrB[10][10];
int kolomA;
int barisA;
int kolomB;
int barisB;

void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}

void delay(int b)
{
    int delay;
    delay = 1;
    while (delay < b)
    {
        delay++;
    }
}

void inputA()
{
    gotoxy(104, 13);
    cout << "Masukan jumlah baris = ";
    cin >> barisA;
    gotoxy(104, 14);
    cout << "Masukan jumlah kolom = ";
    cin >> kolomA;
    gotoxy(104, 15);
    cout << "Matrik A : ";
    int y = 16;
    int x = 104;
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomA; j++)
        {
            gotoxy(x, y);
            cin >> arrA[i][j];
            x += 4;
        }
        x = 104;
        y++;
    }
}

void inputB()
{
    gotoxy(104, 13);
    cout << "Masukan jumlah baris = ";
    cin >> barisB;
    gotoxy(104, 14);
    cout << "Masukan jumlah kolom = ";
    cin >> kolomB;
    gotoxy(104, 15);
    cout << "Matrik B : ";
    int y = 16;
    int x = 104;
    for (int i = 0; i < barisB; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            gotoxy(x, y);
            cin >> arrB[i][j];
            x += 4;
        }
        x = 104;
        y++;
    }
}

void matrixA()
{
    gotoxy(104, 12);
    cout << "Matrix A\n";
    int x = 104;
    int y = 13;
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomA; j++)
        {
            gotoxy(x, y);
            cout << arrA[i][j];
            x += 4;
        }
        y++;
        x = 104;
    }
}

void matrixB()
{
    gotoxy(130, 12);
    cout << "Matrix B\n";
    int x = 130;
    int y = 13;
    for (int i = 0; i < barisB; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            gotoxy(x, y);
            cout << arrB[i][j];
            x += 4;
        }
        y++;
        x = 130;
    }
}

void AddMtrx()
{
    if (barisA == barisB && kolomA == kolomB)
    {
        gotoxy(104, 17);
        cout << "Matrix Hasil Penjumlahan";
        int x = 104;
        int y = 18;
        gotoxy(120, 13);
        cout << "+";
        for (int v = 0; v < barisA; v++)
        {
            for (int c = 0; c < kolomA; c++)
            {
                gotoxy(x, y);
                cout << arrA[v][c] + arrB[v][c];
                x += 4;
            }
            y++;
            x = 104;
        }
    }
    else
    {
        gotoxy(104, 17);
        cout << "Maaf Ordo Matrix Tidak Terpenuhi";
    }
}

void SubtMtrx()
{
    if (barisA == barisB && kolomA == kolomB)
    {
        gotoxy(104, 17);
        cout << "Matrix Hasil Penjumlahan";
        int x = 104;
        int y = 18;
        gotoxy(120, 13);
        cout << "-";
        for (int v = 0; v < barisA; v++)
        {
            for (int c = 0; c < kolomA; c++)
            {
                gotoxy(x, y);
                cout << arrA[v][c] - arrB[v][c];
                x += 4;
            }
            y++;
            x = 104;
        }
    }
    else
    {
        gotoxy(104, 17);
        cout << "Maaf Ordo Matrix Tidak Terpenuhi";
    }
}

void TransposeMtrx(char a)
{
    int arrB2[10][10];
    int arrA2[10][10];
    if (a == 'a' || a == 'A')
    {
        gotoxy(104, 17);
        cout << "Transpose Matrik A";
        int x = 104;
        int y = 18;
        for (int a = 0; a < barisA; a++)
        {
            for (int b = 0; b < kolomA; b++)
            {
                arrA2[b][a] = arrA[a][b];
            }
        }
        for (int m = 0; m < kolomA; m++)
        {
            for (int n = 0; n < barisA; n++)
            {
                gotoxy(x, y);
                cout << arrA2[m][n];
                x += 4;
            }
            y++;
            x = 104;
        }
    }
    else if (a == 'b' || a == 'B')
    {
        int x = 104;
        int y = 18;
        gotoxy(104, 17);
        cout << "Transpose Matrik B";
        for (int i = 0; i < barisB; i++)
        {
            for (int j = 0; j < kolomB; j++)
            {
                arrB2[j][i] = arrB[i][j];
            }
        }
        for (int m = 0; m < kolomB; m++)
        {
            for (int n = 0; n < barisB; n++)
            {
                gotoxy(x, y);
                cout << arrB2[m][n];
                x += 4;
            }
            y++;
            x = 104;
        }
    }
}

void MulMtrx()
{
    int rslt[10][10];
    if (kolomA == barisB)
    {
        gotoxy(104, 17);
        cout << "Perkalian 2 Matrix\n";
        int x = 104;
        int y = 18;
        gotoxy(120, 13);
        cout << "x";
        for (int i = 0; i < barisA; i++)
        {
            for (int j = 0; j < kolomB; j++)
            {
                rslt[i][j] = 0;
                for (int k = 0; k < barisB; k++)
                {
                    rslt[i][j] += arrA[i][k] * arrB[k][j];
                }
                gotoxy(x, y);
                cout << rslt[i][j];
                x += 4;
            }
            y++;
            x = 104;
        }
    }
    else
    {
        gotoxy(104, 17);
        cout << "Maaf Ordo Matrix Tidak Terpenuhi\n";
    }
}

void DetMtrx(char a)
{
    if (a == 'a' || a == 'A')
    {
        float det = 0;
        if (barisA == kolomA)
        {
            if (barisA == 2)
            {
                det = (arrA[0][0] * arrA[1][1]) - (arrA[0][1] * arrA[1][0]);
            }
            else if (barisA == 3)
            {
                for (int r = 0; r < 3; r++)
                {
                    det = det + (arrA[0][r] * (arrA[1][(r + 1) % 3] * arrA[2][(r + 2) % 3] - arrA[1][(r + 2) % 3] * arrA[2][(r + 1) % 3]));
                }
            }
            gotoxy(104, 17);
            cout << "Determinan dari Matrix A : " << det;
        }
        else
        {
            gotoxy(104, 17);
            cout << "Maaf Ordo Matrix Tidak Terpenuhi\n";
        }
    }
    if (a == 'b' || a == 'B')
    {
        float det = 0;
        if (barisB == kolomB)
        {
            if (barisB == 2)
            {
                det = (arrB[0][0] * arrB[1][1]) - (arrB[0][1] * arrB[1][0]);
            }
            else if (barisB == 3)
            {
                for (int r = 0; r < 3; r++)
                {
                    det = det + (arrB[0][r] * (arrB[1][(r + 1) % 3] * arrB[2][(r + 2) % 3] - arrB[1][(r + 2) % 3] * arrB[2][(r + 1) % 3]));
                }
            }
            gotoxy(104, 17);
            cout << "Determinan dari Matrix B : " << det;
        }
        else
        {
            gotoxy(104, 17);
            cout << "Maaf Ordo Matrix Tidak Terpenuhi\n";
        }
    }
}