#pragma once
#include"DrawStrategy.h"
#include"Circle.h"
class DrawCircleStrategy : public DrawStrategy {
public:
	void draw(const Shape& shape) const override {
		dynamic_cast<const Circle&>(shape).draw();
	}
};