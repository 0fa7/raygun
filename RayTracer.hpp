#pragma once

#include <vector>

struct Point
{
    float x_;
    float y_;
    float z_;
};

struct Color
{
    int r_;
    int g_;
    int b_;
};

struct Sphere
{
    Point o_;
    float r_;
    Color c_;
};

class RayTracer
{
public:
    RayTracer();
    ~RayTracer();

    vector<Sphere> scene_;
};