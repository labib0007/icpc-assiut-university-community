#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char X;
    cin >> X;

    if (isdigit(X))
        cout << "IS DIGIT";

    else
    {
        if (isupper(X))
        {
            cout << "ALPHA" << '\n';
            cout << "IS CAPITAL";
        }

        else

        {
            cout << "ALPHA" << '\n';
            cout << "IS SMALL";
        }
    }

    return 0;
}