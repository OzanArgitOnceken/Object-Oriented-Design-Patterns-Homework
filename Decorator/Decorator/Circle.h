#pragma once
#include"Shape.h"
#include<iostream>
class Circle:public Shape {
public:
	//Constructor
	Circle(){}
	void draw()override {
		std::cout << "Drawing: Circle" << std::endl;
	}
	virtual ~Circle(){}
};