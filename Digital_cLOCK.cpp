
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


