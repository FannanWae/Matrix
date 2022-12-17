#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "matrix.h"

using namespace std;

int main()
{
    gotoxy(25, 21);
    cout << "ASSALAMUALAIKUM WR. WB";
    gotoxy(25, 22);
    cout << "Hallo! Tekan 'ENTER' untuk Mulai ";
    getch();
    system("cls");
    char selamat[28] = {'S', 'E', 'L', 'A', 'M', 'A', 'T', 'D', 'A', 'T', 'A', 'N', 'G', 'D', 'I', 'P', 'R', 'O', 'G', 'R', 'A', 'M', 'M', 'A', 'T', 'R', 'I', 'K'};
    int x = 68;
    int x2 = 66;
    for (int i = 0; i < 28; i++)
    {
        if (i < 13)
        {
            if (i == 7)
            {
                x += 3;
            }
            gotoxy(x, 22);
            cout << selamat[i];
            x += 2;
        }
        else
        {
            if (i == 22)
            {
                x2 += 3;
            }
            gotoxy(x2, 23);
            cout << selamat[i];
            x2 += 2;
        }
        delay(100000000);
    }
    getch();
    system("cls");

    for (int i = 70; i <= 95; i++)
    {
        gotoxy(i, 21);
        cout << "=";
        gotoxy(i, 23);
        cout << "=";
        delay(50000000);
    }
    char load[7] = {'L', 'O', 'A', 'D', 'I', 'N', 'G'};
    for (int i = 0; i <= 100; i++)
    {
        int a = 70;
        if (i < 1)
        {
            for (int j = 0; j < 7; j++)
            {
                gotoxy(a, 22);
                cout << load[j] << " ";
                a += 2;
                delay(80000000);
            }
        }
        gotoxy(84, 22);
        cout << " [" << i << "%]";
        delay(30000000);
    }
    system("cls");
    int flag = 0;
    int pilih;
    char trans, det;
    char exit[11] = {'T', 'E', 'R', 'I', 'M', 'A', 'K', 'A', 'S', 'I', 'H'};
    int ex = 70;
    do
    {
    ulang:
        if (flag == 0)
        {
            do
            {
                gotoxy(65, 12);
                cout << "======================================\n";
                gotoxy(65, 13);
                cout << "| 1. Masukan Nilai Matriks A         |\n";
                gotoxy(65, 14);
                cout << "| 2. Masukan Nilai Matriks B         |\n";
                gotoxy(65, 15);
                cout << "| 3. Lanjut                          |\n";
                gotoxy(65, 16);
                cout << "| 4. Exit                            |\n";
                gotoxy(65, 17);
                cout << "|                                    |\n";
                gotoxy(65, 18);
                cout << "|                                    |\n";
                gotoxy(65, 19);
                cout << "|                                    |\n";
                gotoxy(65, 20);
                cout << "======================================\n";
                gotoxy(65, 21);
                cout << "pilih angka berapa? [1-2] = ";
                cin >> pilih;
                switch (pilih)
                {
                case 1:
                    inputA();
                    flag++;
                    break;
                case 2:
                    inputB();
                    flag++;
                    break;
                case 3:
                    flag++;
                    break;
                case 4:
                    system("cls");
                    for (int i = 0; i < 11; i++)
                    {
                        if (i == 6)
                        {
                            ex += 3;
                        }
                        gotoxy(ex, 22);
                        cout << exit[i];
                        ex += 2;
                        delay(100000000);
                    }
                    getch();
                    return 0;
                default:
                    gotoxy(65, 22);
                    cout << "Maaf Yang anda inputkan tidak ada di menu";
                    break;
                }
                system("cls");
            } while (flag != 2);
        }
        else if (flag != 0)
        {
            cout << endl;
            matrixA();
            matrixB();
            cout << endl;
            gotoxy(65, 12);
            cout << "======================================\n";
            gotoxy(65, 13);
            cout << "| 1. Penjumlahan Matrix A & B        |\n";
            gotoxy(65, 14);
            cout << "| 2. Pengurangan Matrix A & B        |\n";
            gotoxy(65, 15);
            cout << "| 3. Perkalian Matrix A & B          |\n";
            gotoxy(65, 16);
            cout << "| 4. Transpose Matrix A & B          |\n";
            gotoxy(65, 17);
            cout << "| 5. Determinan Matrix A & B         |\n";
            gotoxy(65, 18);
            cout << "| 6. Ulang Input Matrix A & B        |\n";
            gotoxy(65, 19);
            cout << "| 7. Exit                            |\n";
            gotoxy(65, 20);
            cout << "======================================\n";
            gotoxy(65, 21);
            cout << "pilih angka berapa? [1-2] = ";
            cin >> pilih;
            switch (pilih)
            {
            case 1:
                AddMtrx();
                getch();
                break;
            case 2:
                SubtMtrx();
                getch();
                break;
            case 3:
                MulMtrx();
                getch();
                break;
            case 4:
                gotoxy(65, 22);
                cout << "Mau Transponse Matrix apa? [A/B] : ";
                cin >> trans;
                if (trans == 'a' || trans == 'A')
                {
                    TransposeMtrx(trans);
                }
                else if (trans == 'b' || trans == 'B')
                {
                    TransposeMtrx(trans);
                }
                getch();
                break;
            case 5:
                gotoxy(65, 22);
                cout << "Mau Determinan Matrix apa? [A/B] : ";
                cin >> det;
                if (det == 'a' || det == 'A')
                {
                    DetMtrx(det);
                }
                else if (det == 'b' || det == 'B')
                {
                    DetMtrx(det);
                }
                getch();
                break;
            case 6:
                flag = 0;
                system("cls");
                goto ulang;
                break;
            case 7:
                ex = 70;
                system("cls");
                for (int i = 0; i < 11; i++)
                {
                    if (i == 6)
                    {
                        ex += 3;
                    }
                    gotoxy(ex, 22);
                    cout << exit[i];
                    ex += 2;
                    delay(100000000);
                }
                getch();
                return 0;
            default:
                gotoxy(65, 22);
                cout << "Maaf Yang anda inputkan tidak ada di menu";
                break;
            }
            system("cls");
        }
    } while (pilih != 10);

    getch();
}