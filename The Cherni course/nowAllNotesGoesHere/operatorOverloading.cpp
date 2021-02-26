#include <iostream>
using namespace std;

class Vector
{
public:
    float m_X, m_Y;
    Vector() {}
    Vector(float x, float y) : m_X(x), m_Y(y) {}

    Vector add(const Vector &v) const
    {
        return Vector(m_X + v.m_X, m_Y + v.m_Y);
    }

    Vector multiply(const Vector &v) const
    {
        return Vector(m_X * v.m_X, m_Y * v.m_Y);
    }

    Vector operator+(const Vector &v) const
    {
        return add(v);
    }

    Vector operator*(const Vector &v) const
    {
        return multiply(v);
    }

    bool operator==(const Vector &v)
    {
        return (m_X == v.m_X) && (m_Y == v.m_Y);
    }
};

// now lets overload
// 1. Extraction opertaor <<
// 2. Insertion operator >>
// we have to overload them outside of our class because there are two operands one is cin or cout
// which are part of ostream and istream class whereas one operaand is of Vector class thats why we /// have to declare them gobally

ostream &operator<<(ostream &cout, Vector &v)
{
    cout << v.m_X << " | " << v.m_Y << endl;
    return cout;
}

istream &operator>>(istream &cin, Vector &v)
{
    cin >> v.m_X >> v.m_Y;
    return cin;
}

int main()
{
    Vector position(5.5f, 10.0f);
    Vector speed(3.5f, 7.0f);
    // Vector sum = position.add(speed);
    // Vector product = position.multiply(speed);
    Vector sum = position + speed;
    Vector product = position * speed;

    cout << position << speed << sum << product;

    Vector velocity;
    cin >> velocity;
    cout << velocity;
    if (velocity == speed)
    {
        cout << "wow " << endl;
    }
}