#include <iostream>
#include <math.h>
using namespace std;
#define f(x) pow(x, 3) - 2 * x - 5 // your equation here
#define d(x) 3 * x *x - 2          // derivative of f(x)
int main()
{
    float x0, deri, f0, error;
    // only one Initial guess
    cout << "Enter a initial guess : ";
    cin >> x0;
    cout << "Enter error tolorence : ";
    cin >> error;

    do
    {
        f0 = f(x0);
        deri = d(x0);
        x0 = x0 - (f0 / deri);

    } while (fabs(f0) > error);

    cout << "Root of f(x) with error tolorence " << error << " is " << x0;
    return 0;
}