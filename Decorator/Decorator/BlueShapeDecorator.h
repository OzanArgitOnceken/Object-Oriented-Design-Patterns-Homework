#pragma once
#include"ShapeDecorator.h"
#include<iostream>
class BlueShapeDecorator :public ShapeDecorator {
public:
	BlueShapeDecorator(Shape*decoratedShape) :ShapeDecorator(decoratedShape) {}
	void draw()override {
		ShapeDecorator::draw();
		std::cout << "Border Color: Blue" << std::endl;
	}
};
