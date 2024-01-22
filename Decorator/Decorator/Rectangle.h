#pragma once
#include"Shape.h"
#include<iostream>
class Rectangle :public Shape {
public:
	Rectangle(){}
	void draw()override {
		std::cout << "Drawing: Rectangle" << std::endl;
	}
	virtual ~Rectangle(){}
};