#pragma once

class Vector
{
public:
    int x;
    int y;

    Vector(int x, int y);

    Vector operator+(const Vector &other) const;
    void operator+=(const Vector &other);

    Vector operator-(const Vector &other) const;
    void operator-=(const Vector &other);

    float dot(Vector vector);
};
