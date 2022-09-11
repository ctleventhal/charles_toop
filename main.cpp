#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter a value: " << endl;
    int timesToDisplay=1;
    cin >> timesToDisplay;

    while (timesToDisplay > 0) {
    if (timesToDisplay == 2001)
    cout << "2001 is #1! \n";
    else if (timesToDisplay < 21)
    for (int n = timesToDisplay;n>0;--n){
    cout << "Go Bears! " << endl; }
    else
        cout << "Please enter a smaller number! \n";
        cin >> timesToDisplay;
    }
    switch (timesToDisplay){
    case -1:
    cout << "ERROR!";
    break;
    case -2:
    cout << "WINNER, WINNER, CHICKEN DINNER!";
    break;
    default:
    cout << "FAREWELL!";
    }

    return 0;
}
