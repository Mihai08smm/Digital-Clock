// Digital_cLOCK.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int s = 0, m = 0, h = 0;
    double i;

    system("cls");
    cout << "Please enter a time in format HH:MM:SS"<<endl;
    cin >> h >> m >> s;
    cout << endl;

    start:;
    for (h; h < 24; h++)
    {
        for (m; m < 60; m++)
        {
            for (s; s < 60; s++)
            {   
               system("cls");
                cout << h<<":"<<m<<":"<<s;

                for ( i = 0; i < 499999999; i++)
                    i++;
                i--;
            }
            s = 0;
        }
        m = 0;
    }
    h = 0;
    goto start;

    _getch();
    return 0;

   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
