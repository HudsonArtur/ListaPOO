#include "Color.hpp"

Color::Color(float _r = 0, float _g = 0, float _b = 0)
{
    r = _r;
    g = _g;
    b = _b;
}

Color::~Color() {}

// aplica��o dos pares de fun��es get e set

float Color::getR()
{
    return r;
}

float Color::getG()
{
    return g;
}

float Color::getB()
{
    return b;
}

void Color::setR(float r_)
{
    r = r_;
}

void Color::setG(float g_)
{
    g = g_;
}

void Color::setB(float b_)
{
    b = b_;
}
Color Color::operator+(const Color c)
{
    Color ret;
}
