#ifndef SHAPE_DECORATOR_H
#define SHAPE_DECORATOR_H

#include "Shape.h"

class ShapeDecorator : public Shape
{
protected:
    Shape *shapeDecorator;

public:
    ShapeDecorator(Shape *shapeDecorator);
    ~ShapeDecorator();
    void draw() override;
};

#endif