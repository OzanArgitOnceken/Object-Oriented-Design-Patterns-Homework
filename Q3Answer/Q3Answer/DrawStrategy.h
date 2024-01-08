#pragma once
#include"Shape.h"
// Strategy interface for drawing
class DrawStrategy {
public:
	virtual void draw(const Shape& shape) const = 0;
	virtual ~DrawStrategy() {}
};