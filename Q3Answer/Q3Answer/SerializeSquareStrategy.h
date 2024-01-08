#pragma once
#include"SerializeStrategy.h"
#include"Square.h"
// Concrete strategy for serializing squares
class SerializeSquareStrategy : public SerializeStrategy {
public:
	std::string serialize(const Shape& shape) const override {
		return dynamic_cast<const Square&>(shape).serialize();
	}
};