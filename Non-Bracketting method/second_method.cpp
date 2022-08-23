#include <iostream>
#include <math.h>
using namespace std;
#define f(x) x *exp(x) - cos(x) // your equation here

int main()
{
    float x0, x1, x2, f0, f1, f2, error;
    // Initial guessess not cumpolsory to brakect the root
    // take initial guess less than 19 or output become nan , idk why.MAYBE sth with cos,exp
    // but fine for non-trigonomertic and non-expo .stfu
    cout << "Enter First initial guess : ";
    cin >> x0;
    cout << "Enter second initial guess : ";
    cin >> x1;
    cout << "Enter error tolorence : ";
    cin >> error;
    cout << "x0"
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
        f0 = f(x0);
        f1 = f(x1);

        x2 = x0 - (f0 * (x1 - x0)) / (f1 - f0);
        cout << x0 << "\t\t" << x1 << "\t\t" << x2 << "\t\t" << f0 << "\t\t" << f1 << "\t\t" << f2 << endl;
        x0 = x1;
        x1 = x2;
        f2 = f(x2);

    } while (fabs(f2) > error);

    cout << "Root of f(x) with error tolorence " << error << " is " << x2;

    return 0;
}