#pragma once
#include"Shape.h"
class Square : public Shape {
public:
	Square(int side) : side(side) {}

	int getSide() const {
		return side;
	}

	void setSide(int newSide) {
		side = newSide;
	}

	// Implementation of the draw operation for squares
	void draw() const override {
		std::cout << "Drawing Square with side: " << side << std::endl;
	}

	// Implementation of the serialize operation for squares
	std::string serialize() const override {
		return "Square { Side: " + std::to_string(side) + " }";
	}

private:
	int side;
};