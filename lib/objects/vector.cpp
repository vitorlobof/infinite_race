#include "vector.hpp"

Vector::Vector(int x, int y) : x(x), y(y){};

Vector Vector::operator+(const Vector &other) const
{
    return Vector(this->x + other.x, this->y + other.y);
}

void Vector::operator+=(const Vector &other)
{
    this->x += other.x;
    this->y += other.y;
}

Vector Vector::operator-(const Vector &other) const
{
    return Vector(this->x - other.x, this->y - other.y);
}

void Vector::operator-=(const Vector &other)
{
    this->x -= other.x;
    this->y -= other.y;
}

float Vector::norm() {
    return std::sqrt(std::pow(this->x, 2) + std::pow(this->y, 2));
}

float Vector::dot(Vector vector)
{
    return this->x * vector.x + this->y * vector.y;
}
