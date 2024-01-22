#pragma once
#include"Shape.h"
class ShapeDecorator :public Shape {
protected:
	Shape* decoratedShape;
public:
	ShapeDecorator(Shape* decoratedShape) :decoratedShape(decoratedShape){}
	void draw()override {
		decoratedShape->draw();
	}
	virtual ~ShapeDecorator(){}
};