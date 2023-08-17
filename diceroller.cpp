#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand((unsigned int)time(NULL));
    int choice;
    int roll;
    while (choice != 2)
    {
        cout << "PRESS 1 TO ROLL" << endl;
        cout << "PRESS 2 TO EXIT" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            roll = (rand() % 6) + 1;
            cout << roll << endl;
            break;

        case 2:
            cout << "SAYONARA" << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}