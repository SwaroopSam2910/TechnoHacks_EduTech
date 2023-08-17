#include <iostream>
using namespace std;
int main()
{
    int choice;
    int value;
    while (choice != 3)
    {    float ans;
        cout << "PRESS 1 TO CONVERT FROM CELCIUS TO FAHRENHEIT" << endl;
        cout << "PRESS 2 TO CONVERT FROM FAHRENHEIT TO CELSIUS" << endl;
        cout << "PRESS 3 TO EXIT" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "ENTER THE VALUE IN CELCIUS" << endl;
            cin >> value;
            ans = (1.8 * value) + 32;
            cout << "RESULT=" << ans << "F" << endl;
            break;
        case 2:
            cout << "ENTER THE VALUE IN FAHRENHEIT" << endl;
            cin >> value;
            ans = (value - 32) * 0.55;
            cout << "RESLUT=" << ans << "C" << endl;
            break;
        case 3:
            cout << "SAYONARA" << endl;
        default:
            break;
        }
    }
    return 0;
}