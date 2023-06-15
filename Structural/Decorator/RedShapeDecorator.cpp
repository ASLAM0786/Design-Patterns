#include "RedShapeDecorator.h"
#include <iostream>
RedShapeDecorator::RedShapeDecorator(Shape *shapeDecorator) : ShapeDecorator(shapeDecorator)
{
    std::cout << "RedShapeDecorator Constructor called!\n";
}

RedShapeDecorator::~RedShapeDecorator()
{
    std::cout << "RedShapeDecorator Destructor called!\n";
}

void RedShapeDecorator::draw()
{
    std::cout << "Shape: RedShapeDecorator\n";
    shapeDecorator->draw();
    setRedBorder();
}

void RedShapeDecorator::setRedBorder()
{
    std::cout << "Border: Color Red!\n";
}