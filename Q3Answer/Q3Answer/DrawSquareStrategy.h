#pragma once
#include"DrawStrategy.h"
#include"Square.h"
class DrawSquareStrategy : public DrawStrategy {
public:
	void draw(const Shape& shape) const override {
		dynamic_cast<const Square&>(shape).draw();
	}
};