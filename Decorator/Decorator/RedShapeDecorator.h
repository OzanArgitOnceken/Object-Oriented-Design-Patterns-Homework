#pragma once
#include"ShapeDecorator.h"
#include<iostream>
class RedShapeDecorator :public ShapeDecorator {
public:
	RedShapeDecorator(Shape*decoratedShape):ShapeDecorator(decoratedShape){}
	void draw()override {
		ShapeDecorator::draw(); 
		std::cout << "Border Color: Red" << std::endl;
	} 
};
