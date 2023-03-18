/***********************
 **  Ibraheem Rehman  **
 **  SE-Q    21i-1102 **
 ***********************/

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


int main()
{
    // Making Hello World with a loop
    int e = 0;
    int h = 0;
    int h1 = 0;
    int o = 0;
    int space = 0;
    int w = 0;
    int o1 = 0;
    int r = 0;
    int l = 0;
    int d = 0;

    for (int i = 0; i < 8 + 4 + 11 + 11 + 14 + 23 + 15 + 18 + 12 + 4; i++)
    {
        if (i >= 7)
        {
            cout << char(7 + 97); // char(7 + 97) = char(104) = h
            if (i < 7 + 4)
            {
                cout << (char)(e + 97) << endl;
                e++;
            }
            if (i >= 11 && i < (11 + 11))
            {

                cout << (char)(e + 97);
                cout << (char)(h + 97) << endl;
                h++;
            }

            if (i >= 22 && i < (22 + 11))
            {
                cout << (char)(e + 97);
                cout << (char)(h + 97);
                cout << (char)(h1 + 97) << endl;
                h1++;
            }
            if (i >= 33 && i < (33 + 15))
            {
                cout << (char)(e + 97);
                cout << (char)(h + 97);
                cout << (char)(h1 + 97);
                cout << (char)(o-1 + 97) << endl;
                o++;
            }
            if (i >= 48 && i < (48 + 23))
            {
                cout << (char)(e + 97);
                cout << (char)(h + 97);
                cout << (char)(h1 + 97);
                cout << (char)(o-1 + 97);
                cout << (char)(space + 32);
                cout << (char)(w + 97) << endl;
                w++;
            }
            if (i >= 71 && i < (71 + 15))
            {
                cout << (char)(e + 97);
                cout << (char)(h + 97);
                cout << (char)(h1 + 97);
                cout << (char)(o-1 + 97);
                cout << (char)(space + 32);
                cout << (char)(w - 1 + 97);
                cout << (char)(o1 + 97) << endl;
                o1++;
            }
            if (i >= 86 && i < (86 + 18))
            {
                cout << (char)(e + 97);
                cout << (char)(h + 97);
                cout << (char)(h1 + 97);
                cout << (char)(o-1 + 97);
                cout << (char)(space + 32);
                cout << (char)(w - 1 + 97);
                cout << (char)(o1 - 1 + 97);
                cout << (char)(r + 97) << endl;
                r++;
            }
            if (i >= 104 && i < (104 + 12))
            {
                cout << (char)(e + 97);
                cout << (char)(h + 97);
                cout << (char)(h1 + 97);
                cout << (char)(o-1 + 97);
                cout << (char)(space + 32);
                cout << (char)(w - 1 + 97);
                cout << (char)(o1 - 1 + 97);
                cout << (char)(r - 1 + 97);
                cout << (char)(l + 97) << endl;
                l++;
            }
            if (i >= 116 && i < (116 + 4))
            {
                cout << (char)(e + 97);
                cout << (char)(h + 97);
                cout << (char)(h1 + 97);
                cout << (char)(o-1 + 97);
                cout << (char)(space + 32);
                cout << (char)(w - 1 + 97);
                cout << (char)(o1 - 1 + 97);
                cout << (char)(r - 1 + 97);
                cout << (char)(l - 1 + 97);
                cout << (char)(d + 97) << endl;
                d++;
            }
        }
        else
        {
            cout << (char)(i + 97) << endl;
        }
        Sleep(40);
    }
}