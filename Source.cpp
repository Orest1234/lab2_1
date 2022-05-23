#include <iostream>
#include "Point.h"
using namespace std;

Point makePoint(double x, double y)
{
    Point a;
    if (!a.Init(x, y))
        cerr << " Wrong arguments to Init(First = 0)" << endl;
    return a;
}

int main()
{
    Point z;
    cout << "Input number ->" << endl;
    cin >> z;
    cout << "The distance from the point to the origin = " << z.distance() << endl;


    makePoint(z.GetFirst(), z.GetSecond());

    return 0;
}