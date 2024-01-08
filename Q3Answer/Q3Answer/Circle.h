#pragma once
#include"Shape.h"
class Circle :public Shape {
public:
	Circle(int radius) :radius(radius) {}
	int getRadius()const {
		return this->radius;
	}
	void setRadius(int rad) {
		this->radius=rad;
	}
	void draw() const override {
		std::cout << "Drawing Circle with radius: " << radius << std::endl;
	}

	// Implementation of the serialize operation for circles
	std::string serialize() const override {
		return "Circle { Radius: " + std::to_string(radius) + " }";
	}
private:
	int radius;
};