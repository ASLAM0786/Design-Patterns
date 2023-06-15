#ifndef RED_SHAPE_DECORATOR_H
#define RED_SHAPE_DECORATOR_H

#include "ShapeDecorator.h"

class RedShapeDecorator : public ShapeDecorator
{

public:
    RedShapeDecorator(Shape *shapeDecorator);
    ~RedShapeDecorator();
    void draw() override;
    void setRedBorder();
};

#endif