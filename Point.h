#pragma once

using namespace std;

class Point
{
private:
    double first, second;
public:
    double GetFirst() { return first; }
    double GetSecond() { return second; }
    void SetFirst(double value) { first = value; }
    void SetSecond(double value) { second = value; }

    Point();
    Point(double, double);
    Point(const Point&);

    operator string() const;

    friend ostream& operator << (ostream&, const Point&);
    friend istream& operator >> (istream&, Point&);

    bool Init(double x, double y);
    double distance();


    Point& operator ++();
    Point& operator --();
    Point operator ++(int);
    Point operator --(int);
};