#include <iostream>
#include <math.h>
using namespace std;
#define f(x) cos(x) - 3 * x + 1         // your equation here
#define g(x) ((cos(x) + 1) / 3 + x) / 2 // directly milney equation halney. follow rule to find milney equation of f(x) in rough ig

int main()
{
    float x, g, f, error;
    int i = 0;
    // Initial guess
    cout << "Enter  initial guess : ";
    cin >> x;
    cout << "Enter error tolorence : ";
    cin >> error;

    cout << "I"
         << "\t\t\t"
         << "x"
         << "\t\t\t"
         << "g" << endl;
    do
    {
        g = g(x);
        x = g;
        f = f(x);
        i = i + 1;
        cout << i << "\t\t\t" << x << "\t\t\t" << g << endl;
    } while (fabs(f) > error);

    cout << "Root of f(x) with error tolorence " << error << " is " << x;
    return 0;
}