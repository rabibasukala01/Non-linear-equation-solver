#include <iostream>
#include <math.h>
using namespace std;
#define f(x) pow(x, 3) - 4 * x - 9 // your equation here

int main()
{
    float x0, x1, x2, f0, f1, f2, error = 0.001;
// Initial guessess
guess:
    cout << "Enter First initial guess : ";
    cin >> x0;
    cout << "Enter second initial guess : ";
    cin >> x1;

    f0 = f(x0);
    f1 = f(x1);

    // checking if guesses brackets the root
    if ((f0 * f1) > 0)
    {
        cout << "Your guesses arenot in bracket.Please enter again\n";
        goto guess;
    }
    else
    {
        cout << "Enter error tolorence : ";
        cin >> error;
        cout
            << "x0"
            << "\t\t"
            << "x1"
            << "\t\t"
            << "x2"
            << "\t\t"
            << "f0"
            << "\t\t"
            << "f1"
            << "\t\t"
            << "f2" << endl;
        do
        {
            x2 = x0 - ((f0 * (x1 - x0)) / (f1 - f0));
            f2 = f(x2);

            if (f2 * f0 < 0)
            {
                x1 = x2;
                f1 = f2;
            }
            else
            {
                x0 = x2;
                f0 = f2;
            }
            cout << x0 << "\t\t" << x1 << "\t\t" << x2 << "\t\t" << f0 << "\t\t" << f1 << "\t\t" << f2 << endl;

        } while (fabs(f2) > error);
    }

    cout << "Root of f(x) with error tolorence " << error << " is " << x2;

    return 0;
}