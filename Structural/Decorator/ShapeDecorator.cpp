#include "ShapeDecorator.h"
#include <iostream>
ShapeDecorator::ShapeDecorator(Shape *shapeDecorator)
{
    std::cout << "ShapeDecorator Constructor called!\n";
    this->shapeDecorator = shapeDecorator;
}

ShapeDecorator::~ShapeDecorator()
{
    std::cout << "ShapeDecorator Destructor called!\n";
}

void ShapeDecorator::draw()
{
    std::cout << "Shape: ShapeDecorator\n";
    shapeDecorator->draw();
}