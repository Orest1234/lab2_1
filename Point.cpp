#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include "Point.h"
using namespace std;

bool Point::Init(double x, double y)
{
    if (fabs(x) <= 100 && fabs(y) <= 100){
        SetFirst(x);
        SetSecond(y);
        return true;
    }
    else{
        return false;
    }
}

Point::Point()//Конструктор за замовчуванням
{
    first = 0;
    second = 0;
}
Point::Point(double r, double i)//Конструктор інціалізації
{
    first = r;
    second = i;
}
Point::Point(const Point& r)//Конструктор копіювання
{
    first = r.first;
    second = r.second;
}

Point::operator string () const//Перетворення в літерний рядок
{
    stringstream ss;
    ss << " first = " << first << endl;
    ss << " second = " << second << endl;
    return ss.str();
}


ostream& operator << (ostream& out, const Point& r)//Перевантаження операції виводу
{
    out << string(r);
    return out;
}
istream& operator >> (istream& in, Point& r)//Перевантаження операції вводу
{
    cout << " first = "; in >> r.first;
    cout << " second = "; in >> r.second;
    cout << endl;
    return in;
}

double Point::distance() {
    return sqrt(first*first+second*second);
}
//Постфіксний та префіксний інкременти
Point& Point::operator ++()
{
    first++;
    return *this;
}
Point& Point::operator --()
{
    first--;
    return *this;
}
Point Point::operator ++(int)
{
    Point t(*this);
    second++;
    return t;
}
Point Point::operator --(int)
{
    Point t(*this);
    second--;
    return t;
}